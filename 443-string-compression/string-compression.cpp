class Solution {
public:
    int compress(vector<char>& chars) {

        if(chars.size()==1){
            return chars.size();
        }
        int count = 0;
        char s = chars[0];
        string res;
        for (int i = 1; i < chars.size(); i++) {
            if (s == chars[i])
                count++;
            else {
                res += chars[i - 1];
                if(count+1>1){
                res += to_string(count + 1);}
                s = chars[i];
                count = 0;
            }
        }
        res += chars.back();
        if(count+1>1){
        res += to_string(count + 1);}

        chars.clear();
        for (auto i : res)
            chars.push_back(i);

        return chars.size();
    }
};