// class Solution {
// public:
//     vector<int> twoSum(vector<int>& numbers, int target) {

//         vector<int>ans;
//         int n=numbers.size();

//         for(int i=0; i<n; i++){
//             int sum=0;
//             for(int j=i; j<n; j++){
//                 sum+=numbers[j];

//                 if(sum == target){
//                     ans.push_back[i,j];
//                     break;
//                 }
//             }
//         }
//         return ans;
//     }
// };

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        int l=0,r=numbers.size()-1;
        int sum=0;

        while(l<r){
            sum=numbers[l]+numbers[r];

        if(sum==target){
            return{l+1,r+1};
        }
        if(sum<target){
            l++;;
        }
        else{
            r--;

        }
        }
        return {-1,-1};
    }
    };
