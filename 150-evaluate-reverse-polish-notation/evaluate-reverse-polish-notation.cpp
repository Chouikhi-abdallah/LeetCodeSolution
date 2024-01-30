class Solution {
public:
    int evalRPN(vector<string>& tokens) {
         stack<int> st;
    for (const auto& token : tokens) {
        if (token != "+" && token != "-" && token != "*"
            && token != "/") {
            st.push(stoi(token));
        } else {
            int temp2 = st.top();
            st.pop();
            int temp1 = st.top();
            st.pop();

            if (token == "+")
                st.push(temp1 + temp2);
            else if (token == "-")
                st.push(temp1 - temp2);
            else if (token == "*")
                st.push(temp1 * temp2);
            else if (token == "/")
                st.push(temp1 / temp2);
        }
    }
    return st.top();
    }
};