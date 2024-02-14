class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> positiveNumbers;
    vector<int> negativeNumbers;
    vector<int> result;
    for(int i:nums){
        if(i>0)
            positiveNumbers.push_back(i);
        else
            negativeNumbers.push_back(i);
    }
    int leftPositive=0;
    int leftNegative=0;
    while(leftPositive<=int(positiveNumbers.size()-1)&&leftNegative<=int(negativeNumbers.size()-1)){
        result.push_back(positiveNumbers[leftPositive]);
        result.push_back(negativeNumbers[leftNegative]);
        leftPositive++;
        leftNegative++;
    }
    return result;


    }
};