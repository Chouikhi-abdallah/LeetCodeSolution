class Solution {
public:
    int maximumStrongPairXor(vector<int>& nums) {
        int n=nums.size();
        int maXor=nums[0]^nums[0];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(abs(nums[i]-nums[j])<=min(nums[i],nums[j]))
                    maXor=max(maXor,nums[i]^nums[j]);
            }
        }

        return maXor;
        
    }
};