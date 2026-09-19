class Solution {
public:
    int largestUniqueNumber(vector<int>& nums) {
        unordered_map<int, int> table;
        for (const auto& num : nums) {
            table[num]++;
        }
        
        int largest = -1;
        
        for (auto it : table) {
            if ((it.second == 1) && (it.first > largest)) {
                largest = it.first;
            }
        }
        return largest;
    }
};