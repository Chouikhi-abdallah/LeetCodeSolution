class Solution {
public:
    int findJudge(int n, vector<vector<int>> trust) {
    map<int, int> trustCounts;
    if(n==1&&trust.empty())
    return 1;
    
    

    for (auto i : trust) {
        trustCounts[i[1]]++;
        trustCounts[i[0]]--;
    }

    for (auto i : trustCounts) {
        if (i.second == n - 1) {
            return i.first;
        }
    }

    return -1;
}
};
