class Solution {
public:
    long long continuousSubarrays(vector<int>& nums) {
        long long cnt=0;
        int l=0,r=0;
        map<int,int>mapp;

        while(r<nums.size()){
            mapp[nums[r]]++;
        
            while(mapp.rbegin()->first - mapp.begin()->first > 2){
                mapp[nums[l]]--;
                if(mapp[nums[l]]==0){
                    mapp.erase(nums[l]);
                }
                l++;
            }
            cnt+=r-l+1;
              r++;
        }
        return cnt;
    }
};