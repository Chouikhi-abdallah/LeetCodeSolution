class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        map<int, int> mp;
        for (auto i : nums) {
            mp[i]++;
        }
        vector<pair<int, int>> vp;
        for (auto i : mp) {
            vp.push_back(make_pair(i.first, i.second));
        }
        sort(vp.begin(), vp.end(), [](auto& a, auto& b) {
            if (a.second == b.second) {
                return a.first > b.first;
            }
            return a.second < b.second;
        });
        vector<int> v;
        for (auto i : vp) {
            for (int j = 0; j < i.second; j++) {
                v.push_back(i.first);
            }
        }

        return v;
    }
};