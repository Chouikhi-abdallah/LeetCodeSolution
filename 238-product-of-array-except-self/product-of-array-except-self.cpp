class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    vector<int>vi(nums.size(),1);
    int leftProduct=1;
    int rightProduct=1;

    for(int i=0;i<nums.size();i++){
        vi[i] *=rightProduct;
        rightProduct *=nums[i];
    }
    for(int i=int (nums.size()-1);i>=0;i--){
        vi[i] *=leftProduct;
        leftProduct *=nums[i];
    }
return vi;
       
    }
};