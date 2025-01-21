
                            // BRUTE FORCE //

// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
      
//         int max_sum=INT_MIN;

//         for(int i=0; i<nums.size(); i++){
//               int sum=0;
//             for(int j=i; j<nums.size(); j++){
//             sum+=nums[j];
//             max_sum=max(max_sum,sum);
//         }
//         }
//         return max_sum;
//     }
// };

                             // OPTIMIZE APPROACH //
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int max_sum=INT_MIN;

        for(int i=0; i<nums.size(); i++){
            sum+=nums[i];
            max_sum=max(max_sum,sum);
            if(sum<0){
                sum=0;
            }
        }
        return max_sum;
    }
    };                         