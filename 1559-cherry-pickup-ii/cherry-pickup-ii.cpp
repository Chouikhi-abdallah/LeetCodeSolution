class Solution {
public:
    int cherryPickup(vector<vector<int>>& grid) {
           int rows = grid.size();
    int cols = grid[0].size();

    vector<vector<vector<int>>> dp(rows, vector<vector<int>>(cols, vector<int>(cols, -1)));

    // Function to calculate the maximum cherries collected
    function<int(int, int, int)> maxCherries = [&](int row, int col1, int col2) -> int {
        if (row == rows) {
            return 0;
        }

        if (dp[row][col1][col2] != -1) {
            return dp[row][col1][col2];
        }

        int cherries = grid[row][col1];
        if (col1 != col2) {
            cherries += grid[row][col2];
        }

        int maxCherry = cherries;

        for (int newCol1 = col1 - 1; newCol1 <= col1 + 1; ++newCol1) {
            for (int newCol2 = col2 - 1; newCol2 <= col2 + 1; ++newCol2) {
                if (newCol1 >= 0 && newCol1 < cols && newCol2 >= 0 && newCol2 < cols) {
                    maxCherry = max(maxCherry, cherries + maxCherries(row + 1, newCol1, newCol2));
                }
            }
        }

        dp[row][col1][col2] = maxCherry;
        return maxCherry;
    };

    return maxCherries(0, 0, cols - 1);
}
    
};