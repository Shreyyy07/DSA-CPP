class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int fiveD=0;
        int tenD=0;

        for(int i=0; i<bills.size(); i++){
            if(bills[i]==5){
               fiveD++;
            }
            else if(bills[i]==10){
                if(fiveD>=1){
                    tenD++;
                   fiveD--;
                }
                else {
                    return false;
                }
            }
           else{
                if(tenD>=1 && fiveD>=1){
                    tenD--;
                   fiveD--;
                }
                else if(fiveD>=3){
                    fiveD-=3;
                }
                else {
                    return false;
                }
            }
        }
        return true;
    }
};