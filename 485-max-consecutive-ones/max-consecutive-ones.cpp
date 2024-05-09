class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        // int current_count=0;
        int max_count=0;
       

        for(int i=0; i<nums.size(); i++){
             int count=0;
            for(int j=i; j<nums.size(); j++){

            if(nums[j]==1){
                count++;
            }
            else{
                break;
            }
            }
            max_count=max(max_count,count);
        }
        return max_count;
        
    }
};