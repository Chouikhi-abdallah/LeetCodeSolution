class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0;
    int product=1;
    string s=to_string(n);
    for(auto &i:s){
        sum+=i-'0';
        product*=i-'0';

    }
    return product-sum;
    }
};