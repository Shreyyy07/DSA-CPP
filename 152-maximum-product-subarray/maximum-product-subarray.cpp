class Solution {
public:
    int maxProduct(vector<int>& nums) {

        int n=nums.size();
        int maxi=INT_MIN;
        
        for(int i=0; i<n; i++){
             int prod=1;
            for(int j=i; j<n; j++){
                prod*=nums[j];
                maxi=max(maxi,prod);
            }
        }
        return maxi;
    }
};


// class Solution {
// public:
//     int maxProduct(vector<int>& nums) {
        
//         int n=nums.size();
//         int maxi=INT_MIN;
//         int prod=1;
        
//         for(int i=0; i<n; i++){
//                 prod*=nums[i];
//                 maxi=max(maxi,prod);
//             if(prod0){
//                 prod=0;
//             }
//     }
//         return maxi;
//     }
// };


