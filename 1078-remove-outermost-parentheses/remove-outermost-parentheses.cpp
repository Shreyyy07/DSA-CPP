class Solution {
public:
    string removeOuterParentheses(string s) {
        
        string ans="";
        int n=s.length();
        int depth=0;

        for(int i=0; i<n; i++){
            if(s[i]=='('){
                if(depth>0){
                    ans.push_back(s[i]);
                }
                depth++;
            }
            if(s[i]==')'){
                depth--;
                if(depth>0){
                    ans.push_back(s[i]);
                }
            }
        }
        return ans;

    }
};