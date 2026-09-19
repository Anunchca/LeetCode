class Solution {
public:
    int largestUniqueNumber(vector<int>& nums) {
        map<int, int> table;
        for (const auto& num : nums) {
            table[num]++;
        }
        for (auto it = table.rbegin(); it != table.rend(); it++) {
            if (it -> second == 1) {
                return it -> first;
            }
        }
        return -1;
    }
};