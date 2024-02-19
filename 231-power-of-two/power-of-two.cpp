class Solution {
public:
    bool isPowerOfTwo(int n) {
           if(n==0)
        return false;
    else
return (log2(n)== trunc(log2(n)));
    }
};