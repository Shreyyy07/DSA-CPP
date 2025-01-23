class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

         int cnt=0;
        int lastSmaller=INT_MIN;
        int longest=1;
        int n=nums.size();

        if(n==0){
            return 0;
        }

    sort(nums.begin(),nums.end());
       
        for(int i=0; i<nums.size(); i++){
            if(nums[i]-1==lastSmaller){
                cnt+=1;
                lastSmaller=nums[i];
            }
            else if(nums[i]!=lastSmaller){
                // n[i]>lastsmaller //
                cnt=1; //restart count //
                lastSmaller=nums[i];
            }
            longest=max(longest,cnt);
        }
        return longest;
    }
};