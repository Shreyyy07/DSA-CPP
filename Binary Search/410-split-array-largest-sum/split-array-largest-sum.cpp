class Solution {
public:

int countSubarray(vector<int>& nums, int maxEle){

    int split=1;
    int subarr=0;
    for(int i=0; i<nums.size(); i++){
        if(subarr + nums[i]<=maxEle){
            subarr+=nums[i];
        }
        else{
            split++;
            subarr=nums[i];
        }
    }
    return split;
}

    int splitArray(vector<int>& nums, int k) {
        
        int n=nums.size();
        int l=*max_element(nums.begin(),nums.end());
        int h=accumulate(nums.begin(),nums.end(),0);

        while(l<=h){
            int mid=l+(h-l)/2;
            int res=countSubarray(nums,mid);

            if(res<=k){
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return l;
    }
};