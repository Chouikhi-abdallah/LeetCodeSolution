class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int>mp;
        for(auto i:nums){
        mp[i]++;
        if(mp[i]>=2)
            return i;
        }
        return -1;
    }
        
};