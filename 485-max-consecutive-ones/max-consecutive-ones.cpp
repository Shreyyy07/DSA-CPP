class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        int max_count=INT_MIN;
         int count=0;
       
        for(int i=0; i<nums.size(); i++){

            if(nums[i]==1){
                count++;
            }
            else{
                 max_count=max(max_count,count);
                count=0;
            }
            }
            
            if(max_count<count)
            return count;
       return max_count;
    }
};