class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        unordered_map<char, char> matching{{'(', ')'}, {'[', ']'}, {'{', '}'}};
        for (char c : s) {
            if (matching.contains(c)) {
                stack.push(c);
            }
            else {
                if (stack.empty()) {
                    return false;
                }
                
                char prev = stack.top();
                if (matching[prev] != c) {
                    return false;
                }
                
                stack.pop();
            }
        }
        return stack.empty();
    }
};

