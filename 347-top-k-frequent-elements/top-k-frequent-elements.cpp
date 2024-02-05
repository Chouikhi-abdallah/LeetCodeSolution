class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        struct ComparePairs {
        bool operator()(const pair<int, int>& p1, const pair<int, int>& p2) {
            return p1.second < p2.second;
        }
    };

    map<int, int> mp;
    vector<int> result;
    priority_queue<pair<int, int>, vector<pair<int, int>>, ComparePairs> pq;

    for (auto &num : nums) {
        mp[num]++;
    }

    for (auto &entry : mp) {
        pq.push({entry.first, entry.second});
    }

    for (int i = 0; i < k; ++i) {
        if (!pq.empty()) {
            result.push_back(pq.top().first);
            pq.pop();
        } else {
            break; 
        }
    }

    return result;
                     
    }

};