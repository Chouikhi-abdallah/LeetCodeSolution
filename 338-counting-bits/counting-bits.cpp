class Solution {
public:
    vector<int> countBits(int n) {
        if(n==0)
         return {0};
   std::vector<int> dp(n + 1, 0);
        dp[0] = 0;
        dp[1] = 1;

        for (int i = 2; i <= n; i++) {
            dp[i] = dp[i / 2] + i % 2;
        }

        return dp;
        }
    
};