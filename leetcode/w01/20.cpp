class Solution {
public:
    bool isValid(string s) {
        std::stack<char> myStack;
        int i = 0;
        while (s[i] != '\0') {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                myStack.push(s[i]);
            } else {
                if (myStack.empty()) {
                    return false;
                } else if ((s[i] == ')' && myStack.top() == '(')
                 || (s[i] == '}' && myStack.top() == '{')
                 || (s[i] == ']' && myStack.top() == '[')) {
                    myStack.pop();
                } else
                    return false;
            }
            i++;
        }
        
        return myStack.empty();
    }
};
