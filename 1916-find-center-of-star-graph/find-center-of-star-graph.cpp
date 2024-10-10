class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        map<int,int>mp;
        for(auto i:edges){
            for(auto j:i){
                mp[j]++;
            }
        }
        int  maxi=0;
        int x=-1;
        for(auto i:mp){
            if(i.second>maxi){
                maxi=i.second;
                x=i.first;
            }
        }
        return x;
    }
};