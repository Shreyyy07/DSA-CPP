class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_cnt=INT_MIN;
        int cnt=0;

        for(int i=0; i<nums.size(); i++){
            if(nums[i]==1){
                cnt++;
            }
            else{
                cnt=0;
            }
             max_cnt=max(max_cnt,cnt);
        }
        return max_cnt;
    }
};