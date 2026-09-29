class Solution {
public:
    bool backspaceCompare(string s, string t) {
        return build(s) == build(t);
    }

    string build(string str) {
        string ans = "";
        for (char c : str) {
            if (c != '#') {
                ans.push_back(c);
            } else if (!ans.empty()) {
                ans.pop_back();
            }
        }
        return ans;
    }
};