class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        int count=n;
        for(int i=0;i<n;i++){
            if(nums[i]==val){
                nums[i]=-1;
                count--;
                }
        }
         std::sort(nums.begin(), nums.end(), [](int a, int b) {
        return a > b;
    });

    return count;

        
    }
};