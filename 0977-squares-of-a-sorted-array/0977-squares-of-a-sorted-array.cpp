class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        auto left {0};
        auto right {ssize(nums) - 1};

        vector<int> result;

        for (auto i = left; i <= right; i++) {
            result.push_back(i * i);
        }

        while (left < right) {
            if (result[right] < result[left]) {
                auto temp  {result[left]};
                result[left] = result[right];
                result[right] = temp;
            }
            right--;
        }
        return result;
    }
};