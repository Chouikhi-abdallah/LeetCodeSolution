class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
            int n = int(nums.size());
            if (n == 0) return 0;

            sort(nums.begin(), nums.end());
            int count = 0;

            for (int i = 1; i < n; ++i) {
            if (nums[i] <= nums[i - 1]) {
            int diff = nums[i - 1] - nums[i] + 1;
            nums[i] += diff;
            count += diff;
        }
    }

    return count;
    }
};