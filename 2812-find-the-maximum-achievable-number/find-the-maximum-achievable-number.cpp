class Solution {
public:
    int theMaximumAchievableX(int num, int t) {
        int x=t;
        while(x--){
            num+=1;
        }
        return num+t;
        
    }
};