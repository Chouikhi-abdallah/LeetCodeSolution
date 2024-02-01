class Solution {
public:
    int search(vector<int>& nums, int target) {
        int last=nums.size()-1;
        int first=0;
        while(first<=last){
             int middle=(last+first)/2;

            if(nums[middle]==target)
                return middle;
            if(nums[middle]>target)
            last=middle-1;
            if(nums[middle]<target)
            first=middle+1;
            
                
        }
        return -1;
        
    }
};