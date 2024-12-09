
                                        // BRUTE FORCE 

// class Solution {
// public:
//     int numberOfSubstrings(string s) {
//         int cnt=0;
//         int n=s.length();
    

//         for(int i=0; i<n; i++){

//             vector<int>hash(3,0);
              
//             for(int j=i; j<n; j++){
//                 hash[s[j]-'a']=1;

//                 if(hash[0] + hash[1] + hash[2]==3){
//                     cnt=cnt+(n-j);
//                     break;
//                 }
//             }
//         }
//         return cnt;
//     }
// };
                                        // OPTIMIZE APPROACH //

class Solution {
public:
    int numberOfSubstrings(string s) {
        int l=0,r=0;
        int cnt=0;
        int n=s.length();
        int hash[3]={0,0,0};

        while(r<n){
            hash[s[r]-'a']++;

            while(hash[0] && hash[1] && hash[2]){
                cnt+=n-r;
                hash[s[l]-'a']--;
                l++;
            }
               r++;
        }
        return cnt;
    }
    };