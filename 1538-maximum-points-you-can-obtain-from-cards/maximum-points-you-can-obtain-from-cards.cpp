class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {

        int n=cardPoints.size();
        int maxScore=0;
        int leftsum=0;
        int rightsum=0;
        for(int i=0; i<k; i++){
            leftsum+=cardPoints[i];
        }
        maxScore=leftsum;
        int rindex=n-1;
        for(int i=k-1; i>=0; i--){
            leftsum-=cardPoints[i];
            rightsum+=cardPoints[rindex];
            rindex--;
            maxScore=max(maxScore,leftsum+rightsum);
        }
        return maxScore;
    }
};