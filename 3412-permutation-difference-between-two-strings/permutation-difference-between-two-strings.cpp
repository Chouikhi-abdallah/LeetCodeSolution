class Solution {
public:
    int findPermutationDifference(string s, string t) {
        map<char,int>mapS,mapT;
        int n=int(s.length());
        for (int i = 0; i < n; i++) {
            mapS[s[i]]=i;
            mapT[t[i]]=i;
    }
        int sum=0;
        for(auto &i:mapS)
            sum+=abs(i.second-mapT[i.first]);

    return sum;  
    }
};