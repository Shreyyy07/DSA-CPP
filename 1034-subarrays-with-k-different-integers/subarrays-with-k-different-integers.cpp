
                             //Brute babu ki jai//

// class Solution {
// public:
//     int subarraysWithKDistinct(vector<int>& nums, int k) {

//         int cnt=0;
//         for(int i=0; i<nums.size(); i++){
//             unordered_map<int,int>mapp;
//             for(int j=i; j<nums.size(); j++){
//                 mapp[nums[j]]++;
//            if(mapp.size()==k){
//             cnt++;
//            }
//             else if(mapp.size()>k){
//                 break;
//             }
//         }
//         }
//         return cnt;
//     }
// };

                            //OPTIMIZED APPROACH//
class Solution {
public:
int solve(vector<int>& nums, int k){

    int l=0;
    int r=0;
    int cnt=0;
    unordered_map<int,int>mapp;
    while(r<nums.size()){
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
        int ans=solve(nums,k)-solve(nums,k-1);

        return ans;
    }
    };

