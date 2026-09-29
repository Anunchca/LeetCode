class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                stack.push(c);
            }
            if (c == ')' || c == '}' || c == ']') {
                if (stack.empty()) {
                    return false;
                }
                char top = stack.top();
                if (top == '(' && c == ')') {
                    stack.pop();
                }
                else if (top == '{' && c == '}') {
                    stack.pop();
                }
                else if (top == '[' && c == ']') {
                    stack.pop();
                }
                else {
                    return false;
                }
            }
        }
        return stack.empty();
    }
};

