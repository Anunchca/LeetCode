class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int ans = 0;
        unordered_map<char, int> inventory;
        for(const auto& c : stones){
            inventory[c]++;
        }
        
        for(const auto& c : jewels){
            ans += inventory[c];
        }
        return ans;
    }
};