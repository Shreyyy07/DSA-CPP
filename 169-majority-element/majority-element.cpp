class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int element;
        int n=nums.size();
        int count1=0;

        for(int i=0; i<n; i++){
            if(count1==0){
                count1=1;
               element= nums[i];
            }
            else if(element==nums[i]){
                count1++;
            }
            else{
                count1--;
            }
        }
        int count2=0;
        for(int i=0; i<n; i++){
            if(nums[i]==element){
                count2++;
            }
        }
        if(count2>(n/2)){
            return element;
        }
        return -1;
        
    }
};