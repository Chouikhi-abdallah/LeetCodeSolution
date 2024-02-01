class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
            vector<vector<int>> vvi;
    vector<int>vi;
    int kk=0;
    std::sort(nums.begin(), nums.end());


        for (int num: nums) {
            vi.push_back(num);
            kk++;
            if (kk == 3) {
                if(vi[vi.size()-2]-vi[vi.size()-3]>k||vi[vi.size()-1]-vi[vi.size()-3]>k||vi[vi.size()-1]-vi[vi.size()-2]>k)
                    return {};
                else{
                kk = 0;
                vvi.push_back(vi);
                vi.clear();
            }
            }

        }

    return vvi;



    }
};