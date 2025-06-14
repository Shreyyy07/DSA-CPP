class Solution {
public:
    string removeOuterParentheses(string s) {

        int depth=0;
        string ans="";

        for(int i=0; i<s.length(); i++){
            if(s[i]=='('){
                if(depth>0){
                ans.push_back(s[i]);
                }
                depth++;
            }
            else{
                depth--;
                if(depth>0){
                ans.push_back(s[i]);
                }
            }
        }
        return ans;

    }
};