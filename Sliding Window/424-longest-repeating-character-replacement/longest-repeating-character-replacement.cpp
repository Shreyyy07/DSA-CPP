                                     // BRUTER FORCE //

// class Solution {
// public:
//     int characterReplacement(string s, int k) {

//         int n=s.length();
//         int maxlen=0;
//         int maxF=0;
//         int char_change;

//         for(int i=0; i<n; i++){
//            int hash[26]={0};
//             for(int j=i; j<n; j++){
//                 hash[s[j]-'A']++;
//                 maxF=max(maxF,hash[s[j]-'A']);
//                 char_change=(j-i+1)-maxF;
        
//         if(char_change<=k){
//             maxlen=max(maxlen,j-i+1);
//         }
//         else{
//             break;
//         }
//         }
//         }
//         return maxlen;
        
//     }
// };

class Solution {
public:
    int characterReplacement(string s, int k) {

        int n=s.length();
        int maxlen=0;
        int maxF=0;
        unordered_map<char,int>mapp;
        int char_change;
        int l=0,r=0;

        while(r<n){
            mapp[s[r]]++;
             maxF=max(maxF,mapp[s[r]]);
             char_change=(r-l+1)-maxF;

             if(char_change>k){
                mapp[s[l]]--;
                l++;
             }
             maxlen=max(maxlen,r-l+1);
             r++;
        }
        return maxlen;
    }
};