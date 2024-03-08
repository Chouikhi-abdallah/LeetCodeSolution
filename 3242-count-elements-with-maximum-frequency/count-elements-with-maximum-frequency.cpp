class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
           map<int,int> mp;
    for(auto i :nums){
        mp[i]++;
    }
    int max=0;
    for(auto i :mp) {
        if(i.second>max)
            max=i.second;
    }
    int res=0;
    for (auto i:mp) {
        if(i.second==max)
            res+=i.second;
    }
    return res;





        
    }
};