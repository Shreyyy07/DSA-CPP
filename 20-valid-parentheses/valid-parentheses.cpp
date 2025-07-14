class Solution {
public:
    bool isValid(string s) {
        
        stack<char>st;
        for(int i=0; i<s.length(); i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                st.push(s[i]);
            }
            else{
                if(st.empty()){
                    return 0;
                }
                char ch=st.top();
                st.pop();
                if(s[i]==')' && ch=='(' ||
                  s[i]=='}' && ch=='{' ||
                  s[i]==']' && ch=='['){
                    continue;
                }
                else{
                    return 0;
                }
            }
        }
        return st.empty();
    }
};