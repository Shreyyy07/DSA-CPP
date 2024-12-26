class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mapp;
        
        for(int i=0; i<n; i++){
            mapp[nums[i]]++;
           if(mapp[nums[i]]>1){
                return nums[i];
            }
        }
        return -1;
    }
};