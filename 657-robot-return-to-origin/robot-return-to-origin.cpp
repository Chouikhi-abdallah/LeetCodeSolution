class Solution {
public:
    bool judgeCircle(string moves) {
        int countU=0;
        int countD=0;
        int countL=0;
        int countR=0;
        for(auto i:moves){
            if(i=='U')
                countU++;
            if(i=='D')
                countD++;
            if(i=='L')
                countL++;
            if(i=='R')
                countR++;            
        }
        if((countU==countD)&&(countR==countL))
            return true;
        else
            return false;    
        
    }
};