class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int ans {nums[0]};
        for (auto i{1}; i < ssize(nums); ++i) {
            nums[i] += nums[i - 1];
            ans = min(nums[i], ans);
        }

        if (ans < 1)
            return (-1 * ans) + 1;
        else
            return 1;
    }
};