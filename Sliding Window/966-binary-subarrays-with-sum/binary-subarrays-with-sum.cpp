// class Solution {
// public:
//     int numSubarraysWithSum(vector<int>& nums, int goal) {

//         int n=nums.size();
//         long long cnt=0;

//         for(int i=0; i<n; i++){
//             long long sum=0;
//             for(int j=i; j<n; j++){
//                 sum+=nums[j];

//                 if(sum==goal){
//                     cnt++;
//             }
//         }
//         }
//         return cnt;
//     }
// };


class Solution {
public:
int solve(vector<int>& nums, int goal){
    
        int n=nums.size();
        int l=0,r=0;
        int cnt=0;
        int sum=0;

        while(r<n){
            sum+=nums[r];

            while(sum>goal && l<=r){
                sum-=nums[l];
                l++;
            }
            cnt+=r-l+1;
            r++;
        }
        return cnt;
}
    int numSubarraysWithSum(vector<int>& nums, int goal) {

    int ans=0;
    ans=solve(nums,goal)-solve(nums,goal-1);
    return ans;
    }
};