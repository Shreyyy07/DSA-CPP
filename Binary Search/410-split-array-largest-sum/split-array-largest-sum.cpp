class Solution {
public:

int maxNumber(vector<int>& nums, int k){

    int n=nums.size();
    int partition=1;
    int subArr=0;
    for(int i=0; i<n; i++){
        if(subArr+nums[i]<=k){
            subArr+=nums[i];
        }
        else{
            partition++;
            subArr=nums[i];
        }
    }
    return partition;
}
    int splitArray(vector<int>& nums, int k) {
        
        int l=*max_element(nums.begin(),nums.end());
        int h=accumulate(nums.begin(),nums.end(),0);
        int ans;

        while(l<=h){
            int mid=l+(h-l)/2;
            int mini=maxNumber(nums,mid);

            if(mini<=k){
                ans=mid;
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return l;
    }
};