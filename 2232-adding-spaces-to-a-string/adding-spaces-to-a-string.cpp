class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {

         int n=s.size();
         int m=spaces.size();
        
        string ans(n+m,' ');
        int j=0;

        for(int i=0; i<s.length(); i++){

            if(j < m && i==spaces[j]){
                ans[i+j]=' ';
                j++;
            }
            ans[i+j]=s[i];
        }
        return ans;
        
    }
};