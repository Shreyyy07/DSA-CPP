class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int s=0;
        int n=nums.size();
        int e= n-1;
        int mid=s+(e-s)/2;
        if(n==1){
            return 0;
        }
        if(nums[0]>nums[1]){
            return 0;
        }
        if(nums[e]>nums[e-1]){
            return e;
        }
       
        while(s<=e){
            if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1]){
                return mid;
            }
            else if(nums[mid]<nums[mid+1]){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
            mid=s+(e-s)/2;
        }
        return -1;
    }
};