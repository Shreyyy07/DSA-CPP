class Solution {
public:
    int atMostKOdd(vector<int>& nums, int k) {
        int sum=0;
        int count = 0;
        int left = 0;
        
        for (int right = 0; right < nums.size(); right++) {
            sum += nums[right] % 2;
           while(sum > k){
            sum -= nums[left] % 2;
            left++;
           }
          
            count += right - left + 1; // Count subarrays ending at right
        }
        
        return count;
    }

    int numberOfSubarrays(vector<int>& nums, int k) {
        return atMostKOdd(nums, k) - atMostKOdd(nums, k - 1);
    }
};