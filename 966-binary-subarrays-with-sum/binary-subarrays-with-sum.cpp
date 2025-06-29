// class Solution {
// public:
//     int numSubarraysWithSum(vector<int>& nums, int goal) {

//         int n=nums.size();
//         long long cnt=0;
//         for(int i=0; i<n; i++){
//             long long sum=0;;
//             for(int j=i; j<n; j++){
//                 sum+=nums[j];

//             if(sum==goal){
//                 cnt++;
//             }
//         }
//         }
//         return cnt;
//     }

// };


class Solution {
public:
int sumArray(vector<int>& nums, int goal){

    int n=nums.size();
    int l=0,r=0;
    int ans=0;
    int sum=0;

    while(r<n){
        sum+=nums[r];

        while(sum>goal && l<=r){
            sum-=nums[l];
            l++;
        }
        ans+=r-l+1;
        r++;
    }
    return ans;

}

    int numSubarraysWithSum(vector<int>& nums, int goal) {

        int x=sumArray(nums,goal);
        int y=sumArray(nums,goal-1);

        return x-y;
    }
}; 