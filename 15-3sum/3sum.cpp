class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int leftPointer=0;
    std::sort(nums.begin(), nums.end());
    vector<vector<int>> vvi;
    set<vector<int>>svi;

    while(leftPointer<=int(nums.size()-3)){
        int left=leftPointer+1;
        int right=int (nums.size()-1);
        while(left<right){
            if(nums[leftPointer]+nums[right]+nums[left]==0){
                svi.insert({nums[leftPointer],nums[right],nums[left]});
                left++;
                right--;
            }
            else if(nums[leftPointer]+nums[right]+nums[left]<0){
                left++;
            }
            else{
                right--;
            }

        }
        leftPointer++;
    }
    for (auto i:svi) {
        vvi.push_back(i);

    }
    return vvi;
    }
};