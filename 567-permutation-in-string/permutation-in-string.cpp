class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length()){
            return false;}
        sort(s1.begin(),s1.end());
        for(int i=0;i<=s2.length()-s1.length();i++){
            string s=s2.substr(i,s1.length());
            sort(s.begin(),s.end());
            if(s==s1)
                return true;
        }

        return false;
        
    }
};