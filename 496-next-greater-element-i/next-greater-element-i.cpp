class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        map<int,int> mp;
    for (const auto &i:nums1) {
        for (int j=0;j<nums2.size();j++) {
            if(i==nums2[j])
                mp[i]=j;
        }
    }
    vector<int>v;
    for (const auto &i :nums1) {
        for (int j = mp[i]; j <nums2.size() ; j++) {
            if(nums2[j]>i) {
                v.push_back(nums2[j]);
                break;
            }
            if(j==nums2.size()-1)
            v.push_back(-1);

        }

    }
    return v;
    }
};