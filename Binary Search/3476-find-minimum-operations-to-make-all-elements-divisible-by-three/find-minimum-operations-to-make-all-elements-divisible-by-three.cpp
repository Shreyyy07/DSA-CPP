class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int count=0;

       
        for(int i=0; i<nums.size(); i++){
        //      if(nums[i]==1){
        //     nums[i]=nums[i]-1;
        //     count++;
        // }
        // else if(nums[i]==2){
        //     nums[i]=nums[i]+1;
        //     count++;
        // }
             if(nums[i]%3!=0){
                count++;
            }
        }
        return count;
    }
};