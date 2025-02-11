
class Solution {
public:
    string removeOccurrences(string s, string part) {
        stack<char> st;
        
        for (char c : s) {
            st.push(c);
            
            if (st.size() >= part.size()) {
                string temp;
                for (int i = 0; i < part.size(); i++) {
                    temp = st.top() + temp;
                    st.pop();
                }

                if (temp != part) {  
                    for (char ch : temp) {
                        st.push(ch);
                    }
                }
            }
        }

        string res;
        while (!st.empty()) {
            res += st.top();
            st.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};

