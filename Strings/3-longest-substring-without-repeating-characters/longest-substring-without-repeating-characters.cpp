class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       vector<int>mapp(256,-1);
        int maxlen=0;
        int n=s.length();
        int left=0;
        int right=0;

        while(right < n){
            if(mapp[s[right]]!=-1){
                left=max(mapp[s[right]]+1,left);
               
            }
            mapp[s[right]]=right;
            maxlen=max(maxlen,right-left+1);
            right++;
        }
       return maxlen;
    }
};