class Solution {
public:
    int maximumSwap(int num) {
        string s = to_string(num);
        vector<char> v(s.begin(), s.end());  
        sort(v.begin(), v.end(), greater<char>());  

        int index = -1;
        for (int i = 0; i < s.size(); i++) {
            if (v[i] != s[i]) {
                index = i;
                break;
            }
        }

        if (index == -1) return num;

        int index2 = -1;
        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] == v[index]) {
                index2 = i;
                break;
            }
        }

        swap(s[index], s[index2]);

        return stoi(s);
    }
};
