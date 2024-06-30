class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k=k%nums.size();

        //step 1- reverse the entire array//
        reverse(nums.begin(),nums.end());

        // step 2- reverse the first k ele
        reverse(nums.begin(),nums.begin()+k);

        // step 3- revere last remanining elements
        reverse(nums.begin()+k,nums.end());
        
    }
};