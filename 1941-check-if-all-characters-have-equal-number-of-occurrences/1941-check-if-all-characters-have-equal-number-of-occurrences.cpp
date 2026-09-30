class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char, int> umap;
        for (const auto& c : s) {
            umap[c]++;
        }
        unordered_set<int> frequencies;
        
        for (const auto& c : umap) {
            frequencies.insert(c.second);
        }
        return frequencies.size() == 1;
    }
};