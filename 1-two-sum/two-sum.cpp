class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int n =nums.size();
        int l=0;
        int r=n-1;
        vector<pair<int,int>>ans;
        for(int i=0; i<n; i++){
            ans.push_back({nums[i],i});
        }

        sort(ans.begin(),ans.end());
        while(l<r){
           int sum=ans[l].first+ans[r].first;
            if(sum==target){
                return {ans[l].second,ans[r].second};
            }
            else if(sum<target){
                l++;
            }
            else{
                r--;
            }
        }
        return {};
    }
};