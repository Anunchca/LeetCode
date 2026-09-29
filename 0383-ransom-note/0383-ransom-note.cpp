class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if(ransomNote.size() > magazine.size())
            return false;
        
        unordered_map<int, int> umap;
        for(const auto& c : ransomNote){
            umap[c]++;
        }
        for(const auto& c: magazine){
            if(umap.count(c)){
                umap[c]--;
                if(umap[c] == 0){
                    umap.erase(c);
                }
            }
        }
        return umap.empty();
    }
};