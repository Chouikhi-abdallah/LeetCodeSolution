class Solution {
public:
    void sortColors(vector<int>& nums) {
         int oneNumber=0,twoNumber=0,zeroNumber=0;
    for(auto i:nums){
        if(i==0)
            zeroNumber++;
        else if(i==1)
            oneNumber++;
        else
            twoNumber++;
    }
    nums.clear();
    for(int i=0;i<zeroNumber;i++){
       nums.push_back(0);
    }
    for(int i=0;i<oneNumber;i++)
        nums.push_back(1);

    for (int i = 0; i <twoNumber ; i++) {
       nums.push_back(2);

    }
   
    }
};