class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
            if (strs.empty()) return "";

    int i;
    for (i = 1; i <= strs[0].size(); i++) {
        int count = 0;
        for (int j = 0; j < strs.size() - 1; j++) {
            if (strs[j].substr(0, i) == strs[j + 1].substr(0, i)) {
                count++;
            } else {
                break;
            }
        }

        if (count != strs.size() - 1) {
            break;
        }
    }
    return strs[0].substr(0, i - 1);
    }
};