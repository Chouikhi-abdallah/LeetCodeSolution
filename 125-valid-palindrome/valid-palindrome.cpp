class Solution {
public:
    bool isPalindrome(string s) {
        
    string cleanStr;

    for (char i : s) {
        if (isalnum(i)) {
            cleanStr += char(tolower(i));
        }
    }


        int left = 0;
        int right = int(cleanStr.length() - 1);

        while (left < right) {
            if (cleanStr[left] == cleanStr[right]) {
                left++;
                right--;
            } else {
                return false;
            }
        }

        return true;
    }
};