// class Solution {
// public:
//     int subarraysWithKDistinct(vector<int>& nums, int k) {

//         int n=nums.size();
//         int cnt=0;
        
//         for(int i=0; i<n; i++){
//             unordered_map<int,int>mapp;
//             for(int j=i; j<n; j++){
//                 mapp[nums[j]]++;
//                 if(mapp.size()==k){
//                     cnt++;
//                 }
//                 else if(mapp.size()>k){
//                     break;
//                 }
//             }
//         }
//         return cnt;

//     }
// };


class Solution {
public:
int solve(vector<int>& nums, int k){

        int n=nums.size();
        int cnt=0;
        int l=0,r=0;
        unordered_map<int,int>mapp;

        while(r<n){
            mapp[nums[r]]++;
            while(mapp.size()>k){
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

    int x=solve(nums,k);
    int y=solve(nums,k-1);

    return x-y;
    }
}; 