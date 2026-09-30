class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int ans = 0;
        unordered_set<char> uset;
        for (int i = 0; i < s.length(); i++) {
            while (uset.count(s[i])) {
                uset.erase(s[left]);
                left++;
            }
            uset.insert(s[i]);
            ans = max(ans, i - left + 1);
        }
        return ans;
    }
};