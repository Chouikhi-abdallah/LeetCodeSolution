class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        
        int n = int(nums.size());
        if(n==1){
            return {0};
        }
        vector<int> prefixSum(n);
        prefixSum[0] = nums[0];
        for (int i = 1; i < n; i++) {
            prefixSum[i] = prefixSum[i - 1] + nums[i];
        }
        vector<int> answer(n);
        answer[0] = prefixSum[n - 1] - prefixSum[0];
        answer[n - 1] = prefixSum[n - 2];

        for (int i = 1; i < n - 1; i++) {
            answer[i] =
                abs(prefixSum[i - 1] - (prefixSum[n - 1] - prefixSum[i]));
        }

        return answer;
    }
};