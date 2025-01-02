class Solution {
public:

    int ceilValue(vector<int>& nums, int divisior){
        int n=nums.size();
        int sumVal=0;

        for(int i=0; i<n; i++){
            sumVal+= ceil((double)nums[i]/divisior);
        }
        return sumVal;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n=nums.size();
        if(n>threshold){
            return -1;
        }
        int l=1;
        int h=*max_element(nums.begin(),nums.end());

        while(l<=h){
            int mid=l+(h-l)/2;
            int sumVal=ceilValue(nums,mid);

            if(sumVal<=threshold){
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return l;
    }
};