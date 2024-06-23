class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n = word1.length();
        int m = word2.length();
        int len = min(n, m);
        int ptrWord1 = 0;
        int ptrWord2 = 0;
        string res;

        for (int i = 0; i < len; i++) {
            res += word1[ptrWord1++];
            res += word2[ptrWord2++];
        }

        if (ptrWord1 < n) {
            res += word1.substr(ptrWord1);
        }

        if (ptrWord2 < m) {
            res += word2.substr(ptrWord2);
        }

        return res;
    }
};