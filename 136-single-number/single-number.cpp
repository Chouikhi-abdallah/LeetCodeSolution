class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int>mp;
        int uniqueElement;
        for(auto i:nums)
            mp[i]++;
        for(auto i:mp){
            if(i.second==1){
                uniqueElement=i.first;
                break;}
        }
        return uniqueElement;

        
    }
};