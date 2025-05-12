class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        
        int n=digits.size();
        set<int>sett;

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                for(int k=0; k<n; k++){
                    if(i!=j && j!=k && k!=i){
                         if (digits[i] != 0 && digits[k] % 2 == 0) {
                        int res=digits[i]*100+digits[j]*10+digits[k];
                        sett.insert(res);
                    }
                }
            }
            }
        }
        vector<int>ans(sett.begin(),sett.end());
        return ans;
    }
};