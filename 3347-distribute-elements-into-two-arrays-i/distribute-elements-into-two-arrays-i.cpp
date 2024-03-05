class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> ans,arr1,arr2;
        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);

        for(int i=2; i<nums.size(); i++){
            if(arr1.back()>arr2.back()){
                arr1.push_back(nums[i]);
            }
            else{
                arr2.push_back(nums[i]);
            }
        }
       
       ans=arr1; //yha arr1 ke sare elements ans array me dalk diye //
     for(auto i:arr2)    //then ek loop chalaya arr2 ke elements ke liye//
           ans.push_back(i);  //fir arr2 ke elements ko bhi push kr diya ans array mei//
           return ans;
        
    }
};