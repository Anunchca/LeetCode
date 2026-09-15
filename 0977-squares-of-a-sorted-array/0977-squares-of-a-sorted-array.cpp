class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        auto left{0};
        auto len{ssize(nums)};
        auto right{len - 1};

        vector<int> squaredResult(len);

        for (auto i {right}; i >= 0; --i) {
            if (abs(nums[left]) > abs(nums[right])) {
                squaredResult[i] = nums[left] * nums[left];
                left++;
            } else {
                squaredResult[i] = nums[right] * nums[right];
                right--;
            }
        }
        return squaredResult;
    }
};