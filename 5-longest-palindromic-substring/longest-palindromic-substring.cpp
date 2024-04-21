class Solution {
  string ans="";
    void expand(string s,int left,int right){
      
        while(left>=0 && right<=s.length() ){
            if(s[left]==s[right]){
                left--;
                right++;
            }
            else{
                break;
            }
        }
        if(ans.size()<right-left){
            ans=s.substr(left+1,right-left-1);
        }
    }
public:
    string longestPalindrome(string s) {
        for(int i=0; i<s.length(); i++){
        expand(s,i,i);
        expand(s,i,i+1);
    }
    return ans;
    }
};