class Solution {
public:
int isPossible(vector<int>& weights, int mid){
    int NoOfdays=1;
    int subarr=0;
    for(int i=0; i<weights.size(); i++){
        if(subarr+weights[i]<=mid){
            subarr+=weights[i];
        }
        else{
            NoOfdays++;
            subarr=weights[i];
        }
    }
    return NoOfdays;
}
    int shipWithinDays(vector<int>& weights, int days) {
        
        int n=weights.size();
        int l=*max_element(weights.begin(),weights.end());
        int h=accumulate(weights.begin(),weights.end(),0);

        while(l<=h){
            int mid=l+(h-l)/2;
            int res=isPossible(weights,mid);
            if(res>days){
                l=mid+1;
            }
            else{
                h=mid-1;
            }
        }
        return l;
    }
};