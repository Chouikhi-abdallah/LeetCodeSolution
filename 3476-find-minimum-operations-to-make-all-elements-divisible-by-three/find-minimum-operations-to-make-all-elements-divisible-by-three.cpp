class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            int mod = nums[i] % 3;
            if (mod != 0) {
                count += min(mod, 3 - mod);
            }
        }
        return count;
    }
};