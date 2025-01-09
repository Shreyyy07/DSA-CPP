
                                       // BRUTE FORCE //

// class Solution {
// public:

//         int cnt=0;
//         for(int i=0; i<nums.size(); i++){
//             int oddCnt=0;
//             for(int j=i; j<nums.size(); j++){
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
int l=0,r=0;
int sum=0;
int cnt=0;

while(r<nums.size()){
    sum+=nums[r]%2;
   
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
        int ans=0;
        ans=solve(nums,k)-solve(nums,k-1);
        return ans;
    }
};