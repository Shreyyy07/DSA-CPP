class Solution {
public:
    string reverseWords(string s) {

        int n=s.length();
        string ans="";
        //step 1 - reverse the words pura //
        reverse(s.begin(),s.end());

        for(int i=0; i<n; i++){
            // step 2- run the loop till we find the space //
            string words="";
            while(i<n && s[i]!=' '){
                words+=s[i];
                i++;
            }
            // step 3 - reverse each word of the added string //
            reverse(words.begin(),words.end());
            // step 4 - now add each word in ans with traiing space
            if(words.length()>0){
                ans+=" "+words;
            }
        }
        return ans.substr(1);
    }
};