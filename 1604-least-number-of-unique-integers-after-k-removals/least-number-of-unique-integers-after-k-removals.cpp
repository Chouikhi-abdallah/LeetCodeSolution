class Solution {
public:
    static bool sortByVal(pair<int, int> a, pair<int, int> b) {
        return (a.second < b.second);
    }

    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int, int> mp;
        for (auto &i : arr)
            mp[i]++;

        vector<pair<int, int>> vpi;
        for (auto i : mp) {
            vpi.push_back(i);
        }

        sort(vpi.begin(), vpi.end(), sortByVal);

        for (auto i : vpi) {
            if (k >= i.second) {
                k -= i.second;
                mp[i.first] = 0;
            } else {
                break;
            }
        }

        unordered_set<int> s;
        for (auto i : mp) {
            if (i.second != 0)
                s.insert(i.first);
        }

        return int(s.size());
    }
};