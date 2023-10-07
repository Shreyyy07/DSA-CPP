class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows=matrix.size();
        int cols=matrix[0].size();

        int rowsIndex=0;
        int colsIndex=cols-1;
        while(rowsIndex<rows && colsIndex>=0){
            int element=matrix[rowsIndex] [colsIndex];
            if(element==target){
                return 1;
            }
            if(element < target){
                rowsIndex++;
            }
            else{
                colsIndex--;
            }
        }
        return 0;
      
    }
};