class Solution {
public:
    char findTheDifference(string s, string t) {
        int assciSum1=0;
        int assciSum2=0;
        for(auto i:s)
            assciSum1+=int(i);
        
        for(auto i:t){
            assciSum2+=int(i);
        }
        return s.length()>t.length() ? char(assciSum1-assciSum2) : char(assciSum2-assciSum1);
    }
};