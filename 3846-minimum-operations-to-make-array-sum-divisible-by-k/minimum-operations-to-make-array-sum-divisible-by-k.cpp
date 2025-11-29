class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int sum=0;

        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        int res=0;
        while(sum%k!=0){
            sum-=1;
            res+=1;
        }

        return res;
        
    }
};