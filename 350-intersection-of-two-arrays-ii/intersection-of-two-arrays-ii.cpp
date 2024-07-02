class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {

        unordered_map<int,int>count;
        // created a hashmap to store the count of the elements
        vector<int>ans;

        for(int i=0; i<nums1.size(); i++){
            //traverse through the elements and count the occ of each element
            count[nums1[i]]++;
        }
        for(int j=0; j<nums2.size(); j++){
            //now check if the ele of 1st array is found in second , also check for its occ
            if(count[nums2[j]]>0){
                ans.push_back(nums2[j]);
                // if the occ is greater than 0 than push the ele 
                count[nums2[j]]--;
                // after pushing the ele itself decrement the count
            }
        }
        return ans;
    }
};