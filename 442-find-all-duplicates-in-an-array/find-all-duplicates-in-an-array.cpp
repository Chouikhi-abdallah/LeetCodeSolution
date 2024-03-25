class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>v;
        map<int,int>mp;
        for(auto &i:nums){
            mp[i]++;
            if(mp[i]==2)
                v.push_back(i);
        }
        return v;
        
    }
};