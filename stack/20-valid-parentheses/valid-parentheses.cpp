class Solution {
public:
    bool isValid(string s) {
        
        stack<int>st;
        for(int i=0; i<s.length(); i++){
            char ch=s[i];
            if(ch=='(' || ch=='{' || ch=='['){
                st.push(ch);
            }
            else{
                if(st.empty()){
                    return false;
                }

            char top=st.top();
            st.pop();
            if(top=='(' && ch==')' ||
            top=='{' && ch=='}' ||
            top=='[' && ch==']'){
                continue;
            }
            else{
                return false;
            }
        }
        }
        if(st.empty()){
            return true;
        }
        else{
            return false;
        }
    }
};