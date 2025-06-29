class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        
        int n=cardPoints.size();
        int lsum=0;
        int rsum=0;
        int totalsum=0;

        for(int i=0; i<=k-1; i++){
            lsum+=cardPoints[i];
        }
        totalsum=lsum;
        int rindex=n-1;

        for(int i=k-1; i>=0; i--){
            lsum-=cardPoints[i];
            rsum+=cardPoints[rindex];
            rindex--;
             totalsum=max(totalsum,lsum+rsum);
        }
        return totalsum;

    }
};