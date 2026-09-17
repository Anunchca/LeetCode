class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for (auto i {1}; i < ssize(nums); i++)
            nums[i] += nums[i-1];
        return nums;
    }
};