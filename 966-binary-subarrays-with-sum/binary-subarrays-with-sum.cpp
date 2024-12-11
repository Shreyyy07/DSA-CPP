
                                    // BRUTR FORCE //

// class Solution {
// public:
//     int numSubarraysWithSum(vector<int>& nums, int goal) {
      
//       long long count=0;

//         for(long long i=0; i<nums.size(); i++){
//         long long sum=0;
//         for(long long j=i; j<nums.size(); j++){
//             sum=sum+nums[j];

//         if(sum==goal){
//             count++;
//         }
//         }
//         }
//         return count++;
//     }
// };

                                         // OPTIMIZE APPROACH //

class Solution {
public:

int solve(vector<int>& nums, int goal){

    int l=0;
    int r=0;
    int sum=0;
    int maxlen=0;

    while(r<nums.size()){
        sum+=nums[r];

        while(sum > goal && l<=r){
            sum-=nums[l];
            l++;
        }
        maxlen+=r-l+1;
        r++;
    }
    return maxlen;
}

 int numSubarraysWithSum(vector<int>& nums, int goal) {

    return solve(nums,goal)-solve(nums,goal-1);
 }
    };                          