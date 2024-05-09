class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_count=INT_MIN;
         int count=0;
       
        for(int i=0; i<nums.size(); i++){

            if(nums[i]==1){
                count++;
                max_count=max(max_count,count);
            }
            else{
                count=0;
            }
            }
            
            if(max_count == INT_MIN)
            return 0;
        else
            return max_count;
        
    }
};