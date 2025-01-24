// class Solution {
// public:
//     int maxProduct(vector<int>& nums) {

//         int n=nums.size();
//         int maxi=INT_MIN;
        
//         for(int i=0; i<n; i++){
//              int prod=1;
//             for(int j=i; j<n; j++){
//                 prod*=nums[j];
//                 maxi=max(maxi,prod);
//             }
//         }
//         return maxi;
//     }
// };

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int n=nums.size();
        int maxi=INT_MIN;
        int prod=1;
        int prod1=1;
        
        for(int i=0; i<n; i++){
                prod*=nums[i];
                maxi=max(maxi,prod);
            if(prod==0){
                prod=1;
            }
    }
    for(int i=n-1; i>=0; i--){
        prod1*=nums[i];
        maxi=max(maxi,prod1);
        if(prod1==0){
            prod1=1;
        }
    }

        return maxi;
    }
};


