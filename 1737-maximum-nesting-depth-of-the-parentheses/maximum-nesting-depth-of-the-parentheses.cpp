class Solution {
public:
    int maxDepth(string s) {
        int maxi=0;
        int cnt=0;

        for(int i=0; i<s.length(); i++){

            if(s[i]=='('){
                cnt++;
                maxi=max(maxi,cnt);
            }
            if(s[i]==')'){
                cnt--;
            }
        }
            
        return maxi;
    }
};