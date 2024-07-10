class Solution {
public:
    int minOperations(vector<string>& logs) {
        int count=0;
        for(string &i:logs){
            if(i=="../"&&count!=0)
                count--;
            else if(i=="./")
                count+=0;
            else if(i=="../"&&count==0)
                count+=0;    
            else
                count++;
        }
        
            return count;    

    }
};