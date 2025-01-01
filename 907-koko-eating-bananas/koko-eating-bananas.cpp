class Solution {
public:
 // max element ke liye fun //
int maxEle(vector<int>& piles){
    int maxi=INT_MIN;

    for(int i=0; i<piles.size(); i++){
        maxi=max(maxi,piles[i]);
    }
    return maxi;
}
// ceil value lene ke liye function //
long long CaltotalHrs(vector<int>& piles, int h){
    long long totalHour=0;
    for(int i=0; i<piles.size(); i++){
        totalHour+=ceil((double)piles[i] / (double)h);
    }
    return totalHour;
}

    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=maxEle(piles);

        while(low<=high){
            int mid=low+(high-low)/2;
           long long totalHrs=CaltotalHrs(piles,mid);

            if(totalHrs <= h){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};