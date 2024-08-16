class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int minFromAllArrays = arrays[0][0];
        int maxFromAllArrays = arrays[0][arrays[0].size() - 1];
        int fixedMinIndex = 0;
        int minFromAllArrays2 = arrays[1][0];
        int maxFromAllArrays2 = arrays[1][arrays[1].size() - 1];
        int fixedMaxIndex = 0;

        for (int i = 1; i < arrays.size(); i++) {
            if (arrays[i][0] < minFromAllArrays) {
                minFromAllArrays2 = minFromAllArrays;
                minFromAllArrays = arrays[i][0];
                fixedMinIndex = i;
            } else if (arrays[i][0] < minFromAllArrays2) {
                minFromAllArrays2 = arrays[i][0];
            }

            if (arrays[i][arrays[i].size() - 1] > maxFromAllArrays) {
                maxFromAllArrays2 = maxFromAllArrays;
                maxFromAllArrays = arrays[i][arrays[i].size() - 1];
                fixedMaxIndex = i;
            } else if (arrays[i][arrays[i].size() - 1] > maxFromAllArrays2) {
                maxFromAllArrays2 = arrays[i][arrays[i].size() - 1];
            }
        }

        if (fixedMinIndex != fixedMaxIndex) {
            return abs(maxFromAllArrays - minFromAllArrays);
        } else {
            return max(abs(maxFromAllArrays2 - minFromAllArrays), abs(maxFromAllArrays - minFromAllArrays2));
        }
    }
};