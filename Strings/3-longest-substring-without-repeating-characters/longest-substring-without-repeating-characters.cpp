class Solution {
public:
    int lengthOfLongestSubstring(string s) {

      unordered_map<char,int>count;
        int left=0;
        int maxLen=0;

        for(int right=0; right<s.length(); right++){
        if(count.find(s[right])!=count.end() && count[s[right]]>=left){
           left=count[s[right]]+1;
        }
        count[s[right]]=right;
        maxLen=max(maxLen,right-left+1);
        }
    return maxLen;
    }

};