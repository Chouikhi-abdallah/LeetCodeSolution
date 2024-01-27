class Solution {
public:
    char repeatedCharacter(string &s) {
        map<char,int> mp;
        char ch;
        for (auto  &i:s){
            mp[i]++;
            if(mp[i]==2){
                 ch=i;
                 break;
        }} 
    return ch;
    }
};