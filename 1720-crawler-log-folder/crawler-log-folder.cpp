class Solution {
public:
    int minOperations(vector<string>& logs) {
        int count = 0;
        for (string &i : logs) {
            if (i == "../" && count != 0)
                count--;
            else if (i == "./" || (i == "../" && count == 0))
                continue;
            else
                count++;
        }
        
        return count;    
    }
};
