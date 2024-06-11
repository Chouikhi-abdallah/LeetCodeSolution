class Solution {
public:
    bool isPerfectSquare(int x) {
        if(x==4||x==1)
        return true;
 
    vector<unsigned long long >v;
 
 
    unsigned long long  left=0;
    unsigned long long  right=x/2;
    while(left<=right){
        unsigned long long  mid=left+(right-left)/2;
        if(mid*mid==x)
            return true;
        if(mid*mid>x)
            right=mid-1;
        else
            left=mid+1;
    }
    return false;
    }
};