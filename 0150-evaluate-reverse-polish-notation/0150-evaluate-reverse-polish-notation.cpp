class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> operators;
        for (const auto& token : tokens){
            if (token == "+" || token == "-" ||
                token == "*" || token == "/") {

                int operator2 = operators.top(); operators.pop();
                int operator1 = operators.top(); operators.pop();
                
                if(token == "+") operators.push(operator1 + operator2);
                else if(token == "-") operators.push(operator1 - operator2);
                else if(token == "*") operators.push(operator1 * operator2);
                else if(token == "/") operators.push(operator1 / operator2);
            }
            else {
                int i = 0; int sign = 1; int value = 0;
                
                if (token[i] == '-'){
                    sign = -1;
                    ++i;
                }

                for (i; i < static_cast<int>(token.size()); i++){
                    value = (value * 10) + (token[i] - '0');
                }
                operators.push(sign * value);
            }
        }
        return operators.top();
    }
};