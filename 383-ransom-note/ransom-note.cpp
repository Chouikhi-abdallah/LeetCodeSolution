class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int>mp1;
        map<char,int>mp2;
        for(auto i:ransomNote){
            mp1[i]++;
        }
        for(auto i:magazine){
            mp2[i]++;
        }
        for(auto i:ransomNote){
            if(mp2[i]<mp1[i])
                return false;
        }
        return true;
        
    }
};