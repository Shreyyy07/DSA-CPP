
                                   // BRUTE FORCE //

// class Solution {
// public:
//     int subarraysWithKDistinct(vector<int>& nums, int k) {
//         int cnt=0;
//         for(int i=0; i<nums.size(); i++){
//             unordered_map<int,int>hash;
//             for(int j=i; j<nums.size(); j++){
//                 hash[nums[j]]++;
//                 if(hash.size()==k){
//                     cnt++;
//                 }
//                 else if(hash.size()>k){
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

 int solve(vector<int>& nums, int k){
    int l=0,r=0;
    int cnt=0;
    int sum=0;
    unordered_map<int,int>mapp;

    while(r<nums.size()){
        mapp[nums[r]]++;

        while(mapp.size() > k){
           mapp[nums[l]]--;
           if(mapp[nums[l]]==0){
            mapp.erase(nums[l]);
           }
            l++;
        }
            cnt+=r-l+1;
        r++;
    }
    return cnt;
 }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return solve(nums,k)-solve(nums,k-1);
    }
};
                            