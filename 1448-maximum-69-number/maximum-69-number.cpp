class Solution {
public:
    int maximum69Number (int num) {
        string s=to_string(num);
        int index=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='6'){
                index=i;
                break;
            }
        }
        
            s[index]='9';
            return stoi(s);   
    }
};