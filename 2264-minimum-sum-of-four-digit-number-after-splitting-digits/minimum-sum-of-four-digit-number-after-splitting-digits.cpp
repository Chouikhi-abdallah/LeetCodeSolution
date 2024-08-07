class Solution {
public:
    int minimumSum(int num) {
        string s=to_string(num);
        sort(s.begin(),s.end());
        string a,b;
        a+=s[0];
        a+=s[2];
        b+=s[1];
        b+=s[3];
        int x=stoi(a);
        int y=stoi(b);
        return x+y;        
    }
};