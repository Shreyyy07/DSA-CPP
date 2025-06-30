class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        int n=strs.size();
        string ans="";
         sort(strs.begin(),strs.end());
        string s=strs[0];
        string e=strs[n-1];

        if(strs.empty()){
            return "";
        }

        for(int i=0; i<s.size(); i++){
            if(s[i]==e[i]){
                ans+=s[i];
            }
            else{
                break;
            }
        }
        return ans;

    }
};