class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int> v1;
        set<int> v2;
        for (int i = 0; i < nums1.size(); i++) {
            bool exist = false;
            for (int j = 0; j < nums2.size(); j++) {
                if (nums1[i] == nums2[j])
                    exist = true;
            }
            if (!exist)
                v1.insert(nums1[i]);
        }
        for (int i = 0; i < nums2.size(); i++) {
            bool exist = false;
            for (int j = 0; j < nums1.size(); j++) {
                if (nums2[i] == nums1[j])
                    exist = true;
            }
            if (!exist)
                v2.insert(nums2[i]);
        }

        vector<vector<int>>vvi(2);
        for(auto i:v1)
            vvi[0].push_back(i);
         for(auto i:v2)
            vvi[1].push_back(i);
    return vvi;
    }
};