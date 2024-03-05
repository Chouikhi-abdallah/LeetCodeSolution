class Solution {
public:
    int minimumLength(string s) {
            int left=0;
    int right=int (s.length()-1);
    while(left<right){
        if(s[left]==s[right]){
            char temp=s[left];
            while(right>=0&&temp==s[right]){
                right--;
            }
            while(left<s.length()&&temp==s[left]){
                left++;
            }
        }
        else
            break;
        
    }
    if(right<left)
        return 0;
    return abs(right-left)+1;

    }
};