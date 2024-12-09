class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int n=s.length();
        int maxlen=0;
        int len=0;
        
        for(int i=0; i<n; i++){
          vector<int>hash(256,-1);
            for(int j=i; j<n; j++){
                if(hash[s[j]] != -1){
                    break;
                }
                else{
                    hash[s[j]]=1;
                    len=j-i+1;
                     maxlen=max(maxlen,len);
                }    
            }
        }
        return maxlen;
    }
};