class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mapp;
        int l=0;
        int maxLen=0;

        for(int r=0; r<s.length(); r++){
            if(mapp.find(s[r]) != mapp.end() && mapp[s[r]]>=l){
                l=mapp[s[r]]+1;
                mapp[s[r]]=r;
            }
            else{
                 mapp[s[r]]=r;
                maxLen=max(maxLen,r-l+1);
               
            }
        }
        return maxLen;
    }
};