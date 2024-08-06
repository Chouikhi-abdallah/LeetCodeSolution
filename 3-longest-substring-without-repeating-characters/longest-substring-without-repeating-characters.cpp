class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.empty())
            return 0;

        int left = 0;
        int right = 0;
        int n = s.length();
        set<char> uni;
        int maxLength = 0;

        while (right < n) {
            if (uni.find(s[right]) == uni.end()) {
                uni.insert(s[right]);
                maxLength = max(maxLength, right - left + 1);
                right++;
            } else {
                uni.erase(s[left]);
                left++;
            }
        }

        return maxLength;
    }
};
