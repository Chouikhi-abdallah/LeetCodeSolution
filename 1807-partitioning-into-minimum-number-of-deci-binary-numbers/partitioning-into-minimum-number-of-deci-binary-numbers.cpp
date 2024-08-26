class Solution {
public:
    int minPartitions(string n) {

        sort(n.begin(),n.end());

        int ans=n[n.length()-1]-'0';

        return ans;
    }
};