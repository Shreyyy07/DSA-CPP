class Solution {
public:

int divisor(vector<int>& nums, int threshold){

    int n=nums.size();
    int divi=0;
    for(int i=0; i<n; i++){
        divi+=ceil((double)nums[i]/(double)threshold);
    }
    return divi;
}
    int smallestDivisor(vector<int>& nums, int threshold) {
        
        int l=1;
        int h=*max_element(nums.begin(),nums.end());
        int ans;

        while(l<=h){
            int mid=l+(h-l)/2;
            int smallDivi=divisor(nums,mid);

            if(smallDivi<=threshold){
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