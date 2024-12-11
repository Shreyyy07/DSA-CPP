class Solution {
public:
    int characterReplacement(string s, int k) {

        int l=0,r=0;
        int maxlen=0;
        int change=0;
        int n=s.length();
        int maxF=0;
        unordered_map<char,int>mapp;

       while(r<n){

            mapp[s[r]]++;
             maxF=max(maxF,mapp[s[r]]);
           
           if((r-l+1)-maxF > k){
            mapp[s[l]]--;
            l++;
           }
            maxlen=max(maxlen,r-l+1);    
                r++;
        }
        return maxlen;
    }
};