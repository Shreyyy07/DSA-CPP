
                             // BRUTE FORCE //

// class Solution {
// public:
//     int characterReplacement(string s, int k) {

//         int n=s.length();
//         int maxlen=0;
//         int maxfreq=0;
//         int change;

//         for(int i=0; i<s.length(); i++){
//             int hash[26]={0};
//             for(int j=i; j<s.length(); j++){
//                 hash[s[j]-'A']++;

//                 maxfreq=max(maxfreq,hash[s[j]-'A']);
//                 change=(j-i+1)-maxfreq;
//                 if(change<=k){
//                     maxlen=max(maxlen,j-i+1);
//                 }
//                 else{
//                     break;
//                 }
//             }
//         }
//         return maxlen;
//     }
// };

                            // OPTIMIZE APPROACH //
class Solution {
public:
    int characterReplacement(string s, int k) {

        int l=0,r=0;
        int maxlen=0;
        int maxfreq=0;
        int change;
        unordered_map<char,int>mapp;

        while(r<s.length()){
            mapp[s[r]]++;
            maxfreq=max(maxfreq,mapp[s[r]]);
            change=(r-l+1)-maxfreq;

            if(change>k){
                mapp[s[l]]--;
                l++;
            }
            maxlen=max(maxlen,r-l+1);
            r++;
        }
        return maxlen;
    }
};