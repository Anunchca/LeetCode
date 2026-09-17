class Solution {
public:
    int countElements(vector<int>& arr) {
        unordered_set<int> uset{arr.begin(), arr.end()};
        int ans{0};
        
        for(const auto& e : arr){
            if(uset.contains(e + 1)){
                ++ans;
            }
        }
        return ans;
    }
};