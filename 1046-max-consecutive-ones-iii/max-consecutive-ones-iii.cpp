
                               // BRUTE FORCE //

// class Solution {
// public:
//     int longestOnes(vector<int>& nums, int k) {

//         int maxones=0;
//         int n=nums.size();

//         for(int i=0; i<n; i++){
//             int zero=0;
//             for(int j=i; j<n; j++){
//                 if(nums[j]==0){
//                     zero++;
//                 }
//                 if(zero>k){
//                     break;
//                 }
//                 else{
//                     maxones=max(maxones,j-i+1);
//                 }
//             }
//         }
//         return maxones;
//     }
// };

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {

        int n=nums.size();
        int maxones=INT_MIN;
        int zero=0;
        int l=0,r=0;

        while(r<n){
            if(nums[r]==0){
                zero++;
            }
            if(zero>k){
                if(nums[l]==0)
                zero--;
                l++;
            }
            if(zero<=k){
                maxones=max(maxones,r-l+1);
            }
            r++;
        }
        return maxones;
    }
};

