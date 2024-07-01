class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxWords=-1;
        for(int i=0;i<sentences.size();i++){
            int countSpace=0;
            for(int j=0;j<sentences[i].length();j++){
                if(sentences[i][j]==' ')
                    countSpace++;
            }
            if(countSpace>=maxWords)
                maxWords=countSpace;
        }


        return maxWords+1;
    }
};