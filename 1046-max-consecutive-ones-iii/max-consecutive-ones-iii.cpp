
                                                 //BRUTE FORCE APPROACH//

// class Solution {
// public:
//     int longestOnes(vector<int>& nums, int k) {
//         int maxlen=0;

//         for(int i=0; i<nums.size(); i++){
//             int count=0;
//             for(int j=i; j<nums.size(); j++){
//                 if(nums[j]==0){
//                     count++;
//                 }
//                 if(count <= k){
//                     maxlen=max(maxlen,j-i+1);
//                 }
//                 else{
//                    break;
//                 }
//             }
//         }
//         return maxlen;
//     }
// };

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0;
        int r=0;
        int maxlen=0;
        int count=0;

        while(r<nums.size()){

         if(nums[r]==0){
            count++;
         }
         while(count > k){
            if(nums[l]==0){
            count--;
         }
            l++;
         }
         if(count<=k){
            maxlen=max(maxlen,r-l+1);
         }
         r++;
        }
return maxlen;
        }
};

