class Solution {
public:
    void sortColors(vector<int>& nums) {

        int n=nums.size();
        int l=0,mid=0;
        int h=n-1;

        while(mid<=h){
            if(nums[mid]==0){
                swap(nums[mid],nums[l]);
                l++;
                mid++;
            }
            else if(nums[mid]==1){
                // swap(nums[i],mid);
                mid++;
            }
            else if(nums[mid]==2){
                swap(nums[mid],nums[h]);
                // mid++;
                h--;
            }
        }
    }
};