class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        if (k == 0) return nums;

        auto length {ssize(nums)};
        int windowSize{(2 * k) + 1};

        vector<int> ans(length, -1);

        if (length < windowSize) {
            return ans;
        }
        vector<long long> prefixSum(length + 1, 0);
        for (auto i{0}; i < length; ++i) {
            prefixSum[i + 1] = prefixSum[i] + nums[i];
        }

        for (auto i{k}; i + k < length; ++i) {
            auto left{i - k};
            auto right{i + k};

            long long windowSum{prefixSum[right + 1] - prefixSum[left]};
            ans[i] = windowSum / windowSize;
        }
        return ans;
    }
};