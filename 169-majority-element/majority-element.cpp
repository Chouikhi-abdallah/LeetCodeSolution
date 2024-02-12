class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int n=int (nums.size());
        map<int,int> mp;
        int x;
        for(auto &i:nums){
            mp[i]++;
            if (mp[i]>n/2)
                x= i;    
        }
        return x;
    }
};