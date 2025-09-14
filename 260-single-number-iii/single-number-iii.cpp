class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        
        int n=nums.size();
        int cnt=0;
        vector<int>ans;
        unordered_map<int,int>mpp;

        for(int i=0; i<n; i++){
            mpp[nums[i]]++;
        }
        for(auto i:mpp){
            if(i.second==1){
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};