class Solution {
public:
    string removeOuterParentheses(string s) {

        string ans="";
        int depth=0;

        for(int i=0; i<s.length(); i++){

            if(s[i]=='('){
                if(depth>0){
                ans.push_back(s[i]);
                }
                depth++;
            }
            else if(s[i]==')'){
                 depth--;
               if(depth>0){
                ans.push_back(s[i]);
               }
            }
        }
        return ans;
    }
};