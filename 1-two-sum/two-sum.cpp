class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
    std::vector<int> v;
    for (int i = 0; i < nums.size() - 1; i++) {
        for (int j = i + 1; j < nums.size(); j++) { 
            if (nums[i] + nums[j] == target) {  
                v.push_back(i);
                v.push_back(j);
                return v; 
            }
        }
    }
    return v;  
}

};