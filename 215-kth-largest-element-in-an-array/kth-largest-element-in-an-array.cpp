class Solution {
public:

int quickSort(vector<int>& nums, int low, int high, int k){

    int pivot=partition(nums,low,high);
        if(pivot==k){
            return nums[pivot];
        }
        else if(pivot>k){
            return quickSort(nums,low,pivot-1,k);
        }
        else{
            return quickSort(nums,pivot+1,high,k);
        }
    }

int partition(vector<int>& nums, int low, int high){

    int i=low-1;
    int pivot=nums[high];

    for(int j=low; j<high; j++){
        if(nums[j] > pivot){  // kth largest from starting means descending order // 
            i++;
            swap(nums[i],nums[j]);
        }
    }
    i++;
    swap(nums[high],nums[i]);
    return i;
}


    int findKthLargest(vector<int>& nums, int k) {
        return quickSort(nums,0,nums.size()-1,k-1);
    }
};