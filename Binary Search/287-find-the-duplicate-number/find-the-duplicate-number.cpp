class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int>sett;
        
        for(int i:nums){
            // hash[nums[i]]++;
           if(sett.find(i)!=sett.end()){
                return i;
            }
            sett.insert(i);
        }
        return -1;
    }
};