class Solution {
public:
    string clearDigits(string s) {
        stack<char> st1, st2;
        for (int i = s.length() - 1; i >= 0; i--) {
            st1.push(s[i]);
        }
        while (!st1.empty()) {
            if (!isdigit(st1.top())) {
                st2.push(st1.top());
                st1.pop();
            } else {
                st1.pop();
                if (!st2.empty()) {
                    st2.pop();
                }
            }
        }
        string res;
        while (!st2.empty()) {
            res += st2.top();
            st2.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};
