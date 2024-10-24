class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>map(256,-1);

        int left=0;
        int right=0;
        int maxLen=0;

        while(right<s.length()){
            if(map[s[right]] != -1){
                left=max(map[s[right]]+1,left);
            }
                map[s[right]]=right;
            
            maxLen=max(maxLen,right-left+1);
            right++;
        }
        return maxLen;
    }
};