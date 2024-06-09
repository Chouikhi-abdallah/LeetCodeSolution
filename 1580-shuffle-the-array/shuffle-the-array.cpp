class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int left=0;
        int right=n;
        vector<int>res;
        while(right<int(nums.size())){
            res.push_back(nums[left]);
            res.push_back(nums[right]);
            right++;
            left++;

        }     
        return res;
        
    }
};