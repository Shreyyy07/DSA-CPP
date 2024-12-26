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

        vector<int>ans;
        int l=0,r=numbers.size()-1;
        int sum=0;

        while(l<r){
            sum=numbers[l]+numbers[r];

        if(sum==target){
            ans.push_back(l+1);
            ans.push_back(r+1);
            return ans;
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
