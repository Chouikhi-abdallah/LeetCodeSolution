class Solution {
public:
    int pivotInteger(int n) {
        if (n < 1)
            return -1;

        int prefixSum[n + 2];
        int sufixSum[n + 2];

        prefixSum[0] = 0;
        sufixSum[n + 1] = 0;

        for (int i = 1; i <= n; i++) {
            prefixSum[i] = prefixSum[i - 1] + i;
        }

        for (int i = n; i >= 1; i--) {
            sufixSum[i] = sufixSum[i + 1] + i;
        }

        for (int i = 1; i <= n; i++) {
            if (prefixSum[i] == sufixSum[i]) {
                return i;
            }
        }

        return -1;
    }
};