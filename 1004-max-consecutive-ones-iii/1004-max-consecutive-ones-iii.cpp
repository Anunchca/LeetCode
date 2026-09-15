class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        auto left{0};
        auto length{ssize(nums) - 1};

        int curr{0};
        int ans{0};

        for (auto right{0}; right <= length; ++right) {
            if (nums[right] == 0) {
                curr++;
            }
            while (curr > k) {
                if (nums[left] == 0) {
                    curr--;
                }
                left++;
            }
            ans = max(ans, right - left + 1);
        }
        return ans;
    }
};