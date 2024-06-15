class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.length()>t.length())
            return false;
        else{
            int ps=0;
            int pt=0;
            while(pt<t.length()){
                if(t[pt]==s[ps]){
                    ps++;
                }
                pt++;
            }
            if(ps==s.length())
            return true;
            else
            return false;

        }
    }
};