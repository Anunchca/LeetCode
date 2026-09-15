class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        auto length{ssize(nums)};
        if (k > length) return -1;
        
        double cur{0};
        double maximum{0};
        
        for (int i{0}; i < k; i++) {
            cur += nums[i];
        }
        
        maximum = cur;
        
        for (int i{k}; i < length; i++) {
            cur -= nums[i - k];
            cur += nums[i];
            maximum = max(maximum, cur);
        }
        return maximum/k;
    }
};