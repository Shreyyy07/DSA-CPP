
                              // BRUTE FORCE //

// class Solution {
// public:
//     int totalFruit(vector<int>& fruits) {

//         int maxlen=0;
//         for(int i=0; i<fruits.size(); i++){
//                 set<int>sett;
//             for(int j=i; j<fruits.size(); j++){
//                 sett.insert(fruits[j]);
//                 if(sett.size()>2){
//                     break;
//                 }
//                 else{
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
    int totalFruit(vector<int>& fruits) {

        unordered_map<int,int>mapp;
        int maxlen=0;
        int n=fruits.size();
        int l=0,r=0;

        while(r<n){
            mapp[fruits[r]]++;
    
        while(mapp.size()>2){
            mapp[fruits[l]]--;
            if(mapp[fruits[l]]==0){
                mapp.erase(fruits[l]);
            }
            l++;
        }
        maxlen=max(maxlen,r-l+1);
        r++;
        }
        return maxlen;
    }
 };                            