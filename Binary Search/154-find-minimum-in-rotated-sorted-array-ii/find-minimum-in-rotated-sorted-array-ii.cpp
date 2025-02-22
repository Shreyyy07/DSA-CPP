class Solution {
public:
    int findMin(vector<int>& nums) {
     int l=0;
     int h=nums.size()-1;
     int ans=INT_MAX;

     while(l<=h){
        int mid=l+(h-l)/2;

        if(nums[l]==nums[mid] && nums[mid]==nums[h]){
            ans=min(ans,nums[mid]);
            l++;
            h--;
        }

        else if(nums[l]<=nums[mid]){
            ans=min(ans,nums[l]);
            l=mid+1;
        }
        else{
            ans=min(ans,nums[mid]);
            h=mid-1;
        }
     }
     return ans;
    }
};