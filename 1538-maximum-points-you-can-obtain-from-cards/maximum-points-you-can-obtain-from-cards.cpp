class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int leftSum=0;
        int rightSum=0;
        int maxSum=0;
        int n=cardPoints.size();

        for(int i=0; i<k; i++){
            leftSum+=cardPoints[i];
            
        }
        maxSum=leftSum;
        int rindex=n-1;
        int lindex=k-1;
        for(int i=0; i<k; i++){
            leftSum=leftSum-cardPoints[lindex-i];
            rightSum=rightSum+cardPoints[rindex-i];
             maxSum=max(maxSum,leftSum+rightSum);
        }
       
        return maxSum;
    }
};