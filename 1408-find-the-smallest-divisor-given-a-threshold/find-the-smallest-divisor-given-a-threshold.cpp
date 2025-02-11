class Solution {
public:
int solve(vector<int>& nums, int threshold){
    int ans=0;

    for(int i=0; i<nums.size(); i++){
        ans+=ceil((double)nums[i] / (double)threshold);
    }
    return ans;
}
    int smallestDivisor(vector<int>& nums, int threshold) {
        int res=0;
        int l=1;
        int h=*max_element(nums.begin(),nums.end());

        while(l<=h){
            int mid=l+(h-l)/2;
            int ans(solve(nums,mid));

            if(ans<=threshold){
                res=mid;
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return res;
    }
};