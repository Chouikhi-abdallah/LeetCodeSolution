class Solution {
public:
vector<int> theBiggestSize(vector<int> &v1,vector<int> &v2){
   if(v1.size()>v2.size())
       return v1;
   else
       return v2;

}
vector<int> theMinimumSize(vector<int> &v1,vector<int> &v2){
    if(v1.size()<v2.size())
        return v1;
    else
        return v2;

}
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    vector<int> v1= theBiggestSize(nums1,nums2);
    vector<int> v2= theMinimumSize(nums1,nums2);
    set<int>s1;
    set<int>s2;
    vector<int>res;
    for (auto &i:v2) {
        s1.insert(i);
    }
    for (auto &i:v1) {
        s2.insert(i);
    }
    for (auto &i:s1) {
        for (auto &j:s2) {
            if(i==j)
                res.push_back(i);
        }

    }
    return res;
    }
};