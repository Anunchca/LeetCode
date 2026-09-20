class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<vector<int>> result(2);
        unordered_map<int, int> game;

        for (int i = 0; i < matches.size(); i++) {
            game[matches[i][0]];
            game[matches[i][1]]++;
        }

        for (const auto &it : game) {
            if (it.second == 0) {
                result[0].push_back(it.first);
            } else if (it.second == 1) {
                result[1].push_back(it.first);
            }
        }
        
        ranges::sort(result[0]);
        ranges::sort(result[1]);
        
        return result;
    }
};