class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int lsum=0;
        int rsum=0;
        int n=cardPoints.size();
        int totalsum=0;

        for(int i=0; i<k; i++){
            lsum=lsum+cardPoints[i];
        }
        totalsum=lsum;
        int rindex=n-1;
        for(int i=k-1; i>=0; i--){
            lsum=lsum-cardPoints[i];
            rsum=rsum+cardPoints[rindex];
            rindex--;
            totalsum=max(totalsum,lsum+rsum);
        }
        return totalsum;
    }
};