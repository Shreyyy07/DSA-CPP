
                                            // BRUTE FORCE //

// class Solution {
// public:
//     int totalFruit(vector<int>& fruits) {
//         int maxlen=0;

//         for(int i=0; i<fruits.size(); i++){
//             set<int>sett;
//             for(int j=i; j<fruits.size(); j++){
//                 sett.insert(fruits[j]);

//                 if(sett.size() > 2){
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

        int l=0,r=0;
        int maxlen=0;
        int cnt=0;
        unordered_map<int,int>mapp;

        for(int r=0; r<fruits.size(); r++){
            mapp[fruits[r]]++;
            cnt++;

            while(mapp.size() > 2){
                mapp[fruits[l]]--;
                cnt--;
                if(mapp[fruits[l]]==0){
                    mapp.erase(fruits[l]);
                }
                l++;
            }
                maxlen=max(maxlen,r-l+1);
        }
        return maxlen;
    }
};