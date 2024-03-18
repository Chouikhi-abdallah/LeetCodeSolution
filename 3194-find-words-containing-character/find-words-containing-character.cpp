class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int>res;
        set<int>ress;
        for(int i=0;i<words.size();i++){
            for(int j=0;j<words[i].length();j++ ){
                if(words[i][j]==x)
                    ress.insert(i);
            }
        }
        for(auto &i:ress)
            res.push_back(i);
            return res;
    }
};