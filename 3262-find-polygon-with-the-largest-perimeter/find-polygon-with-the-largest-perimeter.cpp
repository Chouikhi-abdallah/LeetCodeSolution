class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
         int n=int(nums.size());
        std::sort(nums.begin(), nums.end());
        for(int i=n-1;i>=0;i--){
        long long  sumSides=0;
        for (int j = i-1; j >=0 ; j--) {
            sumSides+=nums[j];

        }
        if(sumSides>nums[i])
            return sumSides+nums[i];
    }
    return -1;
    }
};