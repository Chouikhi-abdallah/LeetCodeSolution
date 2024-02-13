class Solution {
public:
   int longestConsecutive(vector<int> nums) {
    set<int> s;
    vector<int> v;
    for (const auto &i: nums) {
        s.insert(i);
    }


    if (int(s.size()) == 0) {
        return 0;
    }
    if(int(s.size())==1)
    return 1;
    v.insert(v.end(), s.begin(), s.end());
    int max=1 ;
    int i = 0;
    int count = 1;
    int countBeforeOne;
    while (i < int(v.size()-1)) {
        if(v[i+1]-v[i]==1){
            count++;
            countBeforeOne=count;
        }
        else{
            count=1;
        }

        if(countBeforeOne>max){
            max=countBeforeOne ;
          }
        i++;

    }
    return max;
}
};