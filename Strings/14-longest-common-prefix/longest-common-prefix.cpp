class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        // if(strs.empty()){
        //     return "";
        // }
        sort(strs.begin(),strs.end());
        int n=strs.size();
        string start=strs[0];
        string end=strs[n-1];
        string ans="";

        for(int i=0; i<start.size(); i++){
            if(start[i]==end[i]){
                ans+=start[i];
            }
            else{
                break;
            }
        }
        return ans;
    }
};