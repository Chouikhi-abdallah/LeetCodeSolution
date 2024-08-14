class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int sumOneDigit=0;
        int sumDoubleDigit=0;
        for(auto i:nums){
            string x=to_string(i);
            if(x.length()==2){
                sumDoubleDigit+=i;
            }
            if(x.length()==1){
                sumOneDigit+=i;
            }
            
        }


        return sumOneDigit!=sumDoubleDigit;
        
    }
};