// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
        
//         int n=s.length();
//         int maxLen=0;
//         int len=0;
        
//         for(int i=0; i<n; i++){
//             vector<int>hash(256,-1);
//             for(int j=i; j<n; j++){
//                 if(hash[s[j]]!=-1){
//                     break;
//                 }
//                 else{
//                     hash[s[j]]=1;
//                     len=j-i+1;
//                     maxLen=max(maxLen,len);
//                 }
//             }
//         }
//         return maxLen;
//     }
// };


class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int n=s.length();
        int l=0;
        int r=0;
        int maxLen=0;
        unordered_map<char,int>mapp;

        while(r<n){
            mapp[s[r]]++;

            while(mapp[s[r]]>1){
                mapp[s[l]]--;
                l++;
            }
            maxLen=max(maxLen,r-l+1);
            r++;
        }
        return maxLen;
    }
    };