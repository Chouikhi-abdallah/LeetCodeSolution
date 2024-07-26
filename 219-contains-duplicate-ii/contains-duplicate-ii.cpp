class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
       map<int,vector<int>>mp;

       for(int i=0;i<nums.size();i++){
        mp[nums[i]].push_back(i);
       }
       for(auto i:mp){
        for(int j=0;j<i.second.size();j++){
            for(int z=j+1;z<i.second.size();z++){
                if(abs(i.second[j]-i.second[z])<=k)
                return true;

            }
            
        }
       }
       return false;
    }
};