// class Solution {
// public:
//     int numberOfSubarrays(vector<int>& nums, int k) {
        
//         int n=nums.size();
//         int cnt=0;

//         for(int i=0; i<n; i++){
//                 int oddCnt=0;    
//             for(int j=i; j<n; j++){
//                 if(nums[j]%2==1){
//                     oddCnt++;
//                 }
//                 if(oddCnt==k){
//                     cnt++;
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
        int l=0,r=0;
        int cnt=0;
        int sum=0;

        while(r<n){
            if(nums[r]%2==1){
                sum+=nums[r]%2;
            }
            while(sum>k){
                sum-=nums[l]%2;
                l++;
            }
            cnt+=r-l+1;
            r++;
        }
        return cnt;
}
    int numberOfSubarrays(vector<int>& nums, int k) {
        
        int x=solve(nums,k);
        int y=solve(nums,k-1);

        return x-y;
    }
}; 