class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0,r=0;
        int maxlen=0;
        int n=s.length();
        vector<int>mapp(256,-1);

        while(r<n){
            if(mapp[s[r]]!=-1){
                l=max(l,mapp[s[r]]+1);
            }
            mapp[s[r]]=r;
            maxlen=max(maxlen,r-l+1);
            r++;
            }
        return maxlen;
    }
};