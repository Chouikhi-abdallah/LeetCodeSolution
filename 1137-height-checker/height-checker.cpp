class Solution {
public:
int heightChecker(vector<int> heights) {
    int n=int (heights.size());
    vector<int> expected(heights);
    int count=0;
    std::sort(expected.begin(), expected.end());
    for (int i = 0; i < n; i++) {
        if(heights[i]!=expected[i])
            count++;
    }

    return count;



}
};