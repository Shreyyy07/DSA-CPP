class Solution {
public:

// ceil value lene ke liye function //
long long CaltotalHrs(vector<int>& piles, int h){
    long long totalHour=0;
    for(int i=0; i<piles.size(); i++){
        totalHour+=ceil((double)piles[i] / (double)h);
    }
    return totalHour;
}

    int minEatingSpeed(vector<int>& piles, int h) {
        int ans;
        int low=1;
        int high=*max_element(piles.begin(),piles.end());

        while(low<=high){
            int mid=low+(high-low)/2;
           long long totalHrs=CaltotalHrs(piles,mid);

            if(totalHrs <= h){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};