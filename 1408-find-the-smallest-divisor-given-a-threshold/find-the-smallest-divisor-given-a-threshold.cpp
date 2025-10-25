class Solution {
public:

int solve(vector<int>& nums, int threshold){

    int divisor=0;
    for(int i=0; i<nums.size(); i++){
        divisor+=ceil((double)nums[i]/(double)threshold);
    }
    return divisor;
}
    int smallestDivisor(vector<int>& nums, int threshold) {
        
        int ans;
        int l=1;
        int h=*max_element(nums.begin(),nums.end());

        while(l<=h){
            int mid=l+(h-l)/2;
            int small=solve(nums,mid);

            if(small<=threshold){
                ans=mid;
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return ans;
    }
};