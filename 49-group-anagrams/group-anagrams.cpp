class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>vvs;
    map<string,vector<int>> mpsv;
    vector<string> strs2=strs;
    if(strs.size()==1){
        vvs.push_back({strs[0]});
        return vvs;
    }
    else{
        for (int i=0;i<strs.size();i++) {
            std::sort(strs[i].begin(), strs[i].end());
            mpsv[strs[i]].push_back(i);
        }

        vector<string> vs;
        for (auto &i:mpsv) {
            for (auto &j:i.second) {
                vs.push_back(strs2[j]);

            }
            vvs.push_back(vs);
            vs.clear();

        }
        for (auto &i:vvs) {
            std::sort(i.begin(), i.end());

        }

        return vvs;
    }
    }
};