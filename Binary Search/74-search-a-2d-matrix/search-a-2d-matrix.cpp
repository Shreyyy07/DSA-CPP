  
                                    // BRUTE FORCE // - O(log n)+ O(n) = O(n)


// class Solution {
// public:
// bool binarySearch(vector<int>& matrix, int target){

//     int n=matrix.size();
//     int low=0;
//     int high=n-1;

//     while(low<=high){
//         int mid=low+(high-low)/2;
//         if(matrix[mid]==target){
//             return 1;
//         }
//         else if(matrix[mid]>target){
//             high=mid-1;
//         }
//         else  {
//             low=mid+1;
//         }
//     }
//     return 0;
// }
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {

//         int n=matrix.size();
//         int m=matrix[0].size();
//         for(int i=0; i<n; i++){
//         if(matrix[i][0]<=target && target<=matrix[i][m-1]){
//             return binarySearch(matrix[i],target);
//         }
//     }
//     return 0;
//     }
// };

                                       // OPTIMIZED APPROACH //
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target){

        int n=matrix.size();
        int m=matrix[0].size();
        int l=0; 
        int h=n*m-1;

        while(l<=h){
            int mid=l+(h-l)/2;
           int  row=mid/m;
            int col=mid%m;

            if(matrix[row][col]==target){
                return 1;
            }
            else if(matrix[row][col]<target){
                l=mid+1;
            }
            else{
                h=mid-1;
            }
        }
        return 0;
    }  
};                                  