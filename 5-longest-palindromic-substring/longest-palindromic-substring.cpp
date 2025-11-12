class Solution {
// public:

string ans="";
void expand(string s, int l, int r){

    int n=s.length();
    while(l>=0 && r<=n){
        if(s[l]==s[r]){
        l--;
        r++;
        }
        else{
            break;
        }
    }
    if(ans.size() < r-l){
        ans=s.substr(l+1,r-l-1);
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