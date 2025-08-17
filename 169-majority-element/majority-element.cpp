                                   
                                      // BRUTE FORCE //

// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
        
//         int n=nums.size();

//         for(int i=0; i<n; i++){
//              int cnt=0;
//             for(int j=0;j<n; j++){
//                 if(nums[j]==nums[i]){
//                     cnt++;
//                 }
//             }
//             if(cnt>n/2){
//                 return nums[i];
//             }
//         }
//         return -1;
//     }
// };


                                      // BETTER APPROACH //
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int n=nums.size();
        int cnt=0;
        int ele;
        map<int,int>mapp;

        for(int i=0; i<n; i++){
            mapp[nums[i]]++;
        }
        for(auto x:mapp){
        if(x.second>n/2){
            return x.first;
        }
        }
        return -1;
    }
};                                      














// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
        
//         int n=nums.size();
//         int cnt=0;
//         int ele;

//         for(int i=0; i<n; i++){
//             if(cnt==0){
//                 cnt=1;
//                 ele=nums[i];
//             }
//             else if(ele=nums[i]){
//                 cnt++;
//             }
//             else{
//                 cnt--;
//             }
//         }
//         if(cnt>n/2){
//             return ele;
//         }
//         return -1;
//     }
// };