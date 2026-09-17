class Solution {
public:
    int missingNumber(vector<int>& nums) {
        auto length{ssize(nums)};
        auto expectedSum{(length * (length + 1))/2};
        auto actualSum{0};
        
        for (const auto& num : nums) {
            actualSum += num;
        }
        return expectedSum - actualSum;
    }
};