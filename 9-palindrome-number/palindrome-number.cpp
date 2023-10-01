class Solution {
public:
    bool isPalindrome(int x) {
       std::string s= std::to_string(x);
        std::reverse(s.begin(), s.end());
        if(s ==std::to_string(x))
            return true;
        else
        return false;
    }
};