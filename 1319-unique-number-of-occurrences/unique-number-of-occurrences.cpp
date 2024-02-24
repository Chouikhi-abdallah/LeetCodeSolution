class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>mp;
        for(auto i :arr){
            mp[i]++;
        }
        set<int>s;
        for(auto i:mp){
            s.insert(i.second);
        }
        if(mp.size()==s.size())
        return true;
        else
        return false;

        
    }
};