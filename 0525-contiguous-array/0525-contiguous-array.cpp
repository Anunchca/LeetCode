
class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> umap;
        umap[0] = -1;
        int ans = 0;
        int count = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1)
                ++count;
            else
                --count;
            
            if (umap.count(count)) 
                ans = max(ans, i - umap[count]);
            else 
                umap[count] = i;
        }
        return ans;
    }
};