class Solution {
public:
    char repeatedCharacter(string s) {
        map<char,int> mp;
        char ch;
        for (char &i:s){
            mp[i]++;
            if(mp[i]==2){
                 ch=i;
                 break;
        }} 
    return ch;
    }
};