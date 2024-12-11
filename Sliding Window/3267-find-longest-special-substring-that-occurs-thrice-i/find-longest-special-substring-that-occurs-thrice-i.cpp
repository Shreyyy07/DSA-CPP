class Solution {
public:
    int maximumLength(string s) {
       
       int maxlen=-1;
       unordered_map<string,int>mapp;
        for(int i=0; i<s.length(); i++){
          string len;
        for(int j=i; j<s.length(); j++){
            len += s[j];
            if(s[j]!=s[i]){
                break;
            }
           mapp[len]++;
        
        if(mapp[len]>=3){
            maxlen=max(maxlen,(int)len.length());
        }
        }
    }
    return maxlen;
    } 
};