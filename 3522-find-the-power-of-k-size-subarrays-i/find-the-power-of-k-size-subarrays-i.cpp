class Solution {
public:
    vector<int> resultsArray(vector<int> nums, int k) {
    int n = nums.size();
    vector<int> res;

    for(int i = 0; i <= n - k; i++) {
        int count = 0;
        for(int j = i; j < i + k - 1; j++) {
            if(nums[j] + 1 == nums[j + 1]) {
                count++;
            }
        }
        if(count == k - 1)
            res.push_back(nums[i + k - 1]);
        else
            res.push_back(-1);
    }

    return res;
}

};