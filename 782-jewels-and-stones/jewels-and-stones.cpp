class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        map<char,int> mp;
        for(auto i:jewels){
            mp[i]=0;
        }
        int sum=0;
        for(auto i:stones){
            for(auto j:mp){
                if(i==j.first){
                    sum++;
                }

            }
            
        }
                    return sum;


        
    }
};