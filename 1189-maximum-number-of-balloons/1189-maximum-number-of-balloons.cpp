class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int> table{{'b', 0}, {'a', 0}, {'l', 0}, {'o', 0}, {'n', 0}};

        for (const auto& c : text) {
            if (c == 'b' || c == 'a' || c == 'l' || c == 'o' || c == 'n'){
                table[c]++;
            }
        }

        table['l'] /= 2;
        table['o'] /= 2;

        int ans = table['b'];

        for (const auto& element : table) {
            if (element.second < ans)
                ans = element.second;
        }

        return ans;
    }
};