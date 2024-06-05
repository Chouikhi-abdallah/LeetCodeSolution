class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>res;
        for(auto &i:nums)
            res.push_back(i);
        for(auto &i:nums)
            res.push_back(i);

        return res;    
    }
};