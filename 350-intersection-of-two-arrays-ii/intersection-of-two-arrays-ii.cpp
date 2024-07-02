class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {

        unordered_map<int,int>count;
        // created a hashmap to store the count of the elements
        vector<int>ans;

        for(int i:nums1){
            //traverse through the elements and count the occ of each element
            count[i]++;
        }
        for(int i:nums2){
            //now check if the ele of 1st array is found in second , also check for its occ
            if(count[i]>0){
                ans.push_back(i);
                // if the occ is greater than 0 than push the ele 
                count[i]--;
                // after pushing the ele itself decrement the count
            }
        }
        return ans;
    }
};