class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n = nums.size();
        if (n < 4) return false;

        int i = 0;
        while (i + 1 < n && nums[i + 1] > nums[i]) i++;
        if (i == 0) return false;

        int j = i;
        while (j + 1 < n && nums[j + 1] < nums[j]) j++;
        if (j == i) return false;

        int k = j;
        while (k + 1 < n && nums[k + 1] > nums[k]) k++;
        if (k == j) return false;

        return k == n - 1;
    }
};
