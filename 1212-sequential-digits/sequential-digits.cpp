class Solution {
public:
vector<int> sequentialDigits(int low, int high) {
        vector<int> v ;
        string ch="123456789";string lows=to_string(low);  string highs=to_string(high);
      int k=2 ;int c=int(highs.length());
      while(k<=c){
          for(int i=0;i<=9-k;i++){
              int nu=stoi(ch.substr(i,k));
              if(nu>=low&&nu<=high){
                  v.push_back(nu);
              }
          }
          k++ ;
      }
      return v ;
    }
};