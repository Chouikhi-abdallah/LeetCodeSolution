class Solution {
public:
    int partitionString(string s) {
        int left = 0;
        int right = 1;
        int n = s.length();
        int count = 0;
        while (left < n) {
            set<char> uniques;
            for (int i = left; i <= right; i++) {
                uniques.insert(s[i]);
            }
            if (uniques.size() == ((right - left) + 1) && right < n) {
                right++;
            } else {
                left = right;
                right = left + 1;
                count++;
            }
        }
        return count;
    }
};