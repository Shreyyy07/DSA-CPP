class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        
        int n=nums.size();
        if(n==1){
            return true;
        }
        for(int i=1; i<nums.size(); i++){
                int sum=0;
                sum=nums[i-1]+nums[i];
                if(sum%2==0){
                    return false;
                }
        }
        return true;
    }
};