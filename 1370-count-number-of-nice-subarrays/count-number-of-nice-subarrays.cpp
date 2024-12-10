
                                        //BRUTE FORCE//

// class Solution {
// public:
//     int numberOfSubarrays(vector<int>& nums, int k) {
//            int cnt=0;
//         for(int i=0; i<nums.size(); i++){

//             int oddno=0;

//             for(int j=i; j<nums.size(); j++){

//                 if(nums[j]%2!=0){
//                     oddno++;
//                 }
//                 if(oddno==k){
//                     cnt++;
//                 }
//             }
//         }
//         return cnt;
//     }
// };

class Solution {
public:

 int solve(vector<int>& nums, int k){
     int l=0;
     int r=0;
     int cnt=0;
     int ans=0;

     while(r<nums.size()){

        if(nums[r] %2 !=0){
            ans+=nums[r]%2;
        }
        while(ans>k){
            ans-=nums[l]%2;
            l++;
        }
    cnt+=r-l+1;
    r++;
     }
     return cnt;
    }

    int numberOfSubarrays(vector<int>& nums, int k) {

        int x=solve(nums,k);
        int y=solve(nums,k-1);

        return x-y;
    }
};

