class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        
        int n=nums.size();
        unordered_map<int,int>mpp;

        for(int i=0; i<n; i++){
            mpp[nums[i]]++;
        }
        for(auto x:mpp){
            if(x.second>1){
                return x.first;
            }
        }
        return -1;
    }
};