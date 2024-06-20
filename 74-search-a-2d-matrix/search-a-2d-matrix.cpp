class Solution {
public:
bool searchMatrix(vector<vector<int>> matrix, int target) {
    int leftRow = 0;
    int rightRow = matrix.size() - 1;
    int leftColumn = 0;
    int rightColumn = matrix[0].size() - 1;
    
    while (leftRow <= rightRow && leftColumn <= rightColumn) {
        int midRow = leftRow + (rightRow - leftRow) / 2;
        int midColumn = leftColumn + (rightColumn - leftColumn) / 2;
        
        if (matrix[midRow][midColumn] == target) {
            return true;
        }
        
        if (matrix[midRow][midColumn] < target) {
            if (midColumn == rightColumn) {
                leftRow = midRow + 1;
                leftColumn = 0;
            } else {
                leftColumn = midColumn + 1;
            }
        } else {
            if (midColumn == leftColumn) {
                rightRow = midRow - 1;
                rightColumn = matrix[0].size() - 1;
            } else {
                rightColumn = midColumn - 1;
            }
        }
    }
    
    return false;
}
};