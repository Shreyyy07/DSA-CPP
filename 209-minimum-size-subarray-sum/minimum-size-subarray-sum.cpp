class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {

        int ans=INT_MAX;
        int n=nums.size();
        int l=0 ,r=0;
        int sum=0;

       while(r<n){
        sum += nums[r];
        while(sum >= target){
            ans=min(ans,r-l+1);
            sum-=nums[l];
            l++;
        }
        r++;
       }
        if(ans==INT_MAX)
        return 0;

        return ans;

    }
};