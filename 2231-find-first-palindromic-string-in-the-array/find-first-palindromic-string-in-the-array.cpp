class Solution {
public:
    bool isPalidrome(string &s){
    int left=0;
    int right=int(s.length()-1);
    while(left<right){
        if(s[left]!=s[right]){
            return false;
        }
        left++;
        right--;

    }
    return true;

}
    string firstPalindrome(vector<string>& words) {
        for (string  &i: words) {
        if (isPalidrome(i)) {
                return i;
        }
    }
    return "";
    }
};