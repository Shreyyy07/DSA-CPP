class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {

        int max_sum=0;
        int diff=0;
        int n=nums.size();
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==n){
                diff=abs(nums[i]-nums[0]);
            }
            diff=abs(nums[i]-nums[(i+1)%n]);
                max_sum=max(max_sum,diff);
            }
        return max_sum;
    }
};