class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> stack;
        string result = ""; 

        for (auto c : s) {
            if (c == '(') {
                if (!stack.empty()) {
                    result += c;
                }
                stack.push(c);
            }
            else {
                stack.pop();
                if (!stack.empty()) {
                    result += c;
                }
            }
        }
        return result;
    }
};