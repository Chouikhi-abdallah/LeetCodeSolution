class Solution {
public:
bool isPalindrome(string s){
    int left=0;
    int right=int (s.length()-1);
    while(left<right){

        if(s[left]==s[right]){
            left++;
            right--;
        }
        else
            return false;

    }
    return true;
}

    int countSubstrings(string s) {
         int count=0;
    for (int i = 0; i < s.length(); i++) {
        for (int j =i+1; j <=s.length() ; j++) {
        if(isPalindrome(s.substr(i,j-i)))
            count++;
        }

    }
    return count;

        
    }
};