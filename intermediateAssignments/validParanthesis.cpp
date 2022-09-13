class Solution {
public:
    bool isValid(string str) {
        stack<char> stk;
        for(auto & ch : str) {
            if(strchr("({[", ch)) {
                stk.push(ch);
            } else if(ch == ')' and not stk.empty() and stk.top() == '(') {
                stk.pop();
            } else if(ch == '}' and not stk.empty() and stk.top() == '{') {
                stk.pop();
            } else if(ch == ']' and not stk.empty() and stk.top() == '[') {
                stk.pop();
            } else {
                return false;
            }
        }
        return stk.empty();
    }
};