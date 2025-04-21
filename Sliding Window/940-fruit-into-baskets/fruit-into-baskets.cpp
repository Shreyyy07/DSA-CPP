                                         // BRUTE FORCE //

// class Solution {
// public:
//     int totalFruit(vector<int>& fruits) {
        
//         int n=fruits.size();
//         int maxi=0;

//         for(int i=0; i<n; i++){
//             set<int>sett;
//             for(int j=i; j<n; j++){
//                 sett.insert(fruits[j]);

//                 if(sett.size()<=2){
//                     maxi=max(maxi,j-i+1);
//                 }
//                 else{
//                     break;
//                 }
//             }
//         }
//         return maxi;
//     }
// };


class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        
        int n=fruits.size();
        unordered_map<int,int>mapp;
        int maxi=0;
        int l=0,r=0;

        while(r<fruits.size()){
            mapp[fruits[r]]++;

            if(mapp.size()>2){
                mapp[fruits[l]]--;
                if(mapp[fruits[l]]==0){
                    mapp.erase(fruits[l]);
                }
                l++;
            }
            maxi=max(maxi,r-l+1);
            r++;
        }
        return maxi;
    }
};