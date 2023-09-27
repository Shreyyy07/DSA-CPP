class Solution {
public:
    bool check(vector<int>& nums) {
        int count=0;
        int n1=nums.size();
        for(int i=1; i<n1; i++){
            if(nums[i-1] > nums[i]){
                count++;
            }
        }
        if(nums[n1-1] > nums[0]){
            count++;
              }
            return count<=1;
      
    }
};