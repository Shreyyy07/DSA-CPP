// class Solution {
// public:
//     vector<int> findEvenNumbers(vector<int>& digits) {
        
//         int n=digits.size();
//         set<int>sett;

//         for(int i=0; i<n; i++){
//             for(int j=0; j<n; j++){
//                 for(int k=0; k<n; k++){
//                     if(i!=j && j!=k && k!=i){
//                          if (digits[i] != 0 && digits[k] % 2 == 0) {
//                         int res=digits[i]*100+digits[j]*10+digits[k];
//                         sett.insert(res);
//                     }
//                 }
//             }
//             }
//         }
//         vector<int>ans(sett.begin(),sett.end());
//         return ans;
//     }
// };


class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        
        int n=digits.size();
        unordered_set<int>mapp;

        for(int i=0; i<n; i++){
            if(digits[i]==0){
                continue;
            }            
        for(int j=0; j<n; j++){
            if(j==i){
                continue;
            }
        for(int k=0; k<n; k++){
           if(k==i || k==j){
            continue;
           }
        int res=digits[i]*100+digits[j]*10+digits[k];
        if(res%2==0){
            mapp.insert(res);
        }
        }
        }
        }

        vector<int>ans(mapp.begin(),mapp.end());
        sort(ans.begin(),ans.end());

        return ans;
    }
};