class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>mapp(256,0);
        int l=0;
        int maxlen=0;
        int n=s.length();


        for(int r=0; r<n; r++){
           mapp[s[r]]++;

            while(mapp[s[r]] > 1){
                mapp[s[l]]--;
                l++;
            }
            maxlen=max(maxlen,r-l+1);
            }
        return maxlen;
    }
};