class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        vector<vector<int>>vvi;
        vector<int>vi;
        for(int i=0;i<image.size();i++){
            for(int j=image[i].size()-1;j>=0;j--){
                vi.push_back(!image[i][j]);
            }
            vvi.push_back(vi);
            vi.clear();
        }

        return vvi;
    }
};