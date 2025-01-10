
                               // BRUTE FORCE //

// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {

//         int maxlen=0;

//         for(int i=0; i<s.length(); i++){
//              vector<int>hash(256,-1);
//             for(int j=i; j<s.length(); j++){
//                 // hash[s[j-'a']]++;
//                 if(hash[s[j]]!=-1){
//                     break;
//                 }
//                 else{
//                     hash[s[j]]=1;
//                     maxlen=max(maxlen,j-i+1);
//                 }
//             }
//         }
//         return maxlen;
        
//     }
// };

                                // OPTIMIZE APPROACH //

class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        vector<int>mapp(256,0);
        int maxlen=0;
        int l=0,r=0;

        while(r<s.length()){
            mapp[s[r]]++;

            while(mapp[s[r]]>1){
                mapp[s[l]]--;
                l++;
            }
            maxlen=max(maxlen,r-l+1);
            r++;
        }
        return maxlen;
    }
};