class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=int (nums.size());
        map<int,int> mp;
        int majorityNumber=0;
        for(const auto &i:nums){
            mp[i]++;
            if (mp[i]>n/2){
                majorityNumber= i;
                break;
                }    
        }
        return majorityNumber;
    }
};