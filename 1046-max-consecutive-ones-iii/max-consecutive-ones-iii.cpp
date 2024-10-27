class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left=0;
        int right=0;
        int count=0;
        int maxLen=0;

        while(right<nums.size()){

            if(nums[right]==0){
                count++;
            }
            if(count > k){
                if(nums[left]==0){
                    count--;
                }
                 left++;
            }
            if(count <= k){
                maxLen=max(maxLen,right-left+1);
            }
            right++;
        }
        return maxLen;
    }
};