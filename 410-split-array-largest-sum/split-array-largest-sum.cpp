class Solution {
public:
int solve(vector<int>& nums, int k){
    int partition=1;
    int subarr=0;

    for(int i=0; i<nums.size(); i++){
        if(nums[i]+subarr<=k){
            subarr+=nums[i];
        }
        else{
             partition++;
            subarr=nums[i];
        }
    }
    return partition;
}
    int splitArray(vector<int>& nums, int k) {
        int l=*max_element(nums.begin(),nums.end());
        int h=accumulate(nums.begin(),nums.end(),0);

        while(l<=h){
            int mid=l+(h-l)/2;
            int partition=solve(nums,mid);

            if(partition<=k){
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }    
        return l;
    }
};