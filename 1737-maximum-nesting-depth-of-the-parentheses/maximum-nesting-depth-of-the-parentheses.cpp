class Solution {
public:
    int maxDepth(string s) {
            stack<char> track;
    int maxDepth=0;
    for (char &i : s) {
        if(i=='(')
            track.push(i);
        if(i==')'){
            if(maxDepth<=track.size())
                maxDepth=int(track.size());
            track.pop();
        }


    }
    return maxDepth;

    }
};