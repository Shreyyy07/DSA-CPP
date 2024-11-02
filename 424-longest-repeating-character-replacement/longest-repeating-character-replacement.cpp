class Solution {
public:
    int characterReplacement(string s, int k) {
        
        int maxLen=0;
        int n=s.length();
        int maxF=0;
        int len=0;

        for(int i=0; i<n; i++){
            int hash[26]={0};
            for(int j=i; j<n; j++){
                hash[s[j]-'A']++;
                maxF=max(maxF,hash[s[j]-'A']);
                int len=(j-i+1)-maxF;
            
              if(len<=k){
                maxLen=max(maxLen,j-i+1);
              }
              else{
                break;
              }
            }
        }
        return maxLen;
    }
};