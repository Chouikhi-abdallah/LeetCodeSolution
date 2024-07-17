class Solution {
public:
    string removeStars(string s) {
        stack<int> st;
        for (auto i : s) {
            if (i != '*')
                st.push(i);
            if (i == '*')
                st.pop();
        }

        string res;

        while (!st.empty()) {
            char temp = st.top();
            res += temp;
            st.pop();
        }
        reverse(res.begin(), res.end());

        return res;
    }
};