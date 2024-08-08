class Solution {
public:
    int digitsSum(int n){
        string s=to_string(n);
        int sum=0;
        for(int i=0;i<s.length();i++){
            sum+=(s[i]-'0');
        }

        return sum;
    }
    int differenceOfSum(vector<int>& nums) {
        int ans1=0;
        int ans2=0;
        for(auto i:nums){
            ans1+=i;
            ans2+=digitsSum(i);
        }

        return abs(ans1-ans2);
    }
};