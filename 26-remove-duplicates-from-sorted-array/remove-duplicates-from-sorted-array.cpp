class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>s;
        for(auto &i:nums){
            s.insert(i);
        }
        nums.clear();
        for(auto &i:s)
            nums.push_back(i);

        return s.size();    
        
    }
};