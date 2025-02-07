class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int n=nums.size();
        int mini=INT_MAX;
        int l=0,h=n-1;

        while(l<=h){
            int mid=l+(h-l)/2;

            if(nums[l]<=nums[mid]){
                mini=min(mini,nums[l]);
                l=mid+1;;
            }
            // if(nums[mid]<=nums[h])
            else{
                mini=min(mini,nums[mid]);
                h=mid-1;
            }
        }
        return mini;
    }
};