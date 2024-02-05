class Solution {
public:
    int firstUniqChar(string s) {
            map<char,pair<int,int>> mpcp;
    for (int i = 0; i < s.length(); i++) {
        mpcp[s[i]].first=i;
        mpcp[s[i]].second++;

    }
    int minIndex=int(s.length());

    for (auto &i:mpcp) {
        if((i.second).second==1){
            if(i.second.first<=minIndex)
                minIndex=i.second.first;
        }
    }
    return (minIndex == int (s.length())) ? -1 : minIndex;
    }
};