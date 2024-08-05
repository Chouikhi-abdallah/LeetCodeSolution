class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        map<string, int> mp;
        for (auto i : arr) {
            mp[i]++;
        }
        vector<pair<string, int>> v;
        int index=1;
        for (auto i : arr) {
            for (auto j : mp) {
                if (i == j.first && j.second == 1) {
                    v.push_back(make_pair(j.first, index));
                    index++;
                }
            }
        }

        for (auto i : v) {
            if (i.second == k)
                return i.first;
        }

        return "";
    }
};
