class Solution {
public:
    string interpret(string s) {
        string res;

        for(int i=0;i<s.length();i++){
            if(s[i]=='G')
                res+='G';
            if(s[i]=='('&&s[i+1]==')')
             res+="o";
            if(s[i]=='('&&s[i+1]=='a')
            res+="al";   


        }
        return res;
        
    }
};