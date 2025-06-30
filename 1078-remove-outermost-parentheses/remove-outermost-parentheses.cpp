class Solution {
public:
    string removeOuterParentheses(string s) {
        
        int n=s.length();
        int deep=0;
        string ans="";

        for(int i=0; i<n; i++){
            if(s[i]=='('){
                if(deep>0){
                ans+=s[i];
                }
                deep++;
            }
            else{
                deep--;
                if(deep>0){
                    ans+=s[i];
                }
            }
        }
        return ans;
    }
};