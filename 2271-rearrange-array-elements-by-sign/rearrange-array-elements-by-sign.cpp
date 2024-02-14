class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
    vector<int> result(nums.size(),0);
    int positiveNumbersIndex=0;
    int negativeNumbersIndex=1;
    for (int i = 0; i < int (nums.size()); i++) {
        if(nums[i]>0) {
            result[positiveNumbersIndex] = nums[i];
            positiveNumbersIndex+=2;
        }
        else{
            result[negativeNumbersIndex]=nums[i];
            negativeNumbersIndex+=2;
        }
    }
    return result;

    }
};