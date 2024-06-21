class Solution {
public:
    int strStr(string haystack, string needle) {
     int n=needle.length();
    for(int i=0;i<haystack.length();i++){
        if(haystack.substr(i,n)==needle)
            return i;



    }
    return -1;
    }
};