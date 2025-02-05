class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if (s1.length() != s2.length())
            return false;
        if (s1 == s2)
            return true;
        for (int i = 0; i < s1.length(); i++) {
            if (s1[i] != s2[i]) {
                for (int j = i + 1; j < s2.length(); j++) {
                    if (s2[j] == s1[i]) {
                        swap(s2[i], s2[j]);
                        if (s1 == s2)
                            return true;
                        swap(s2[i], s2[j]);
                    }
                }
                return false;
            }
        }
        return false;
    }
};
