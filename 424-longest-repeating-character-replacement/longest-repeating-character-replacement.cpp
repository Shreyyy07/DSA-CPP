// class Solution {
// public:
//     int characterReplacement(string s, int k) {
        
//         int n=s.length();
//         int maxF=0;
//         int maxLen=0;
//         int change;

//         for(int i=0; i<n; i++){
//             int hash[26]={0};
//             for(int j=i; j<n; j++){
//                 hash[s[j]-'A']++;
//                 maxF=max(maxF,hash[s[j]-'A']);
//                 change=(j-i+1)-maxF;

//                 if(change>k){
//                     break;
//                 }
//                 else{
//                     maxLen=max(maxLen,j-i+1);
//                 }
//             }
//         }
//         return maxLen;
//     }
// };

class Solution {
public:
    int characterReplacement(string s, int k) {

        int n=s.length();
        unordered_map<char,int>mapp;
        int maxF=0,l=0,r=0;
        int change;
        int maxLen=0;

        while(r<n){
            mapp[s[r]]++;
            maxF=max(maxF,mapp[s[r]]);
            change=(r-l+1)-maxF;

            if(change>k){
                mapp[s[l]]--;
                l++;
            }
            else{
                maxLen=max(maxLen,r-l+1);
            }
            r++;
        }
        return maxLen;
    }
};