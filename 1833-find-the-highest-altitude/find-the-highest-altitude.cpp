class Solution {
public:
    int largestAltitude(std::vector<int> gain) {
        int max = INT_MIN;
        int n = gain.size();
        std::vector<int> prefixSum(n + 1);
        prefixSum[0] = 0;

        for (int i = 1; i <= n; i++) {
            prefixSum[i] = prefixSum[i - 1] + gain[i - 1];
        }

        for (int i = 0; i <= n; i++) {
            if (prefixSum[i] >= max)
                max = prefixSum[i];
        }
        return max;
    }
};