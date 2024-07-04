class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int n=arr.size();
        int k=3;
        int count=0;
        if(n==1){
            return false;
        }
        if(n==2){
            return false;
        }
        for(int i=0; i<n; i++){
            if(arr[i]%2==1){
                count++;
            if(count==3){
                return true;
        }
        }
        else {
            count=0;
        }
        }
       
        return false;
        
    }
};