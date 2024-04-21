class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) 
        return "";

         string ans="";
        sort(strs.begin(),strs.end());
       
        int n=strs.size();

        string start=strs[0];
        string end=strs[n-1];
           int len = min(start.size(), end.size());
        
        for(int i=0; i<len; i++){
        if(start[i] != end[i]){
            return ans;
        }
        else{
            ans+=start[i];
        }
        }
        return ans;
        
    }
};