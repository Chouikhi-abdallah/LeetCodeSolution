class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int>mp;
        for(auto i:nums){
            mp[i]++;
        }
        nums.clear();

        for(auto i:mp){
            if(i.second<=2){
            for(int j=0;j<i.second;j++)
                nums.push_back(i.first);
            }
            else{
                nums.push_back(i.first);
                nums.push_back(i.first);
            }
        }
        return nums.size();
        
    }
};