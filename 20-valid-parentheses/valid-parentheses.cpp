class Solution {
public:
    bool isValid(string s) {
   if(s.length()==1)
        return false;
    stack<char> stack;
    for (auto i: s) {
        if (i == '(' || i == '[' || i == '{') {
            stack.push(i);
        } else {
            if(stack.empty())
                return false;
            if (i == ']') {
                if (stack.top() == '[') {
                    stack.pop();
                }
                else
                    return false;
            }
                if (i == ')') {
                    if (stack.top() == '(')
                        stack.pop();
                    else
                        return false;
                }
                if (i == '}') {
                    if (stack.top() == '{')
                        stack.pop();
                    else
                        return false;
                }

            }

        }

        return stack.empty();


    }
};