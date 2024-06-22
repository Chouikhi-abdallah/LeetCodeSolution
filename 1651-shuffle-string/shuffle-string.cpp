class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        map<int,int>mp;
        for(int i=0;i<indices.size();i++){
            mp[indices[i]]=s[i];
        }
        string res;
        for(auto &i:mp){
            res+=i.second;
        }
        return res;
        
    }
};