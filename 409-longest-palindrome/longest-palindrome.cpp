class Solution {
public:
    int longestPalindrome(string s) {
            map<char,int> mp;
    for(auto &i:s){
        mp[i]++;
    }
    int count=0;
    bool thereIsOneAlone=false;
    for(auto i:mp){
        if(i.second%2==0){
        count+=((i.second)/2)*2;}
        else
        {
            count+=((i.second)/2)*2;
            thereIsOneAlone=true;
        }

    }


    if(thereIsOneAlone){
        return count+1;
    }
    else
        return count;



    }
};