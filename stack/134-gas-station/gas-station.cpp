class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        int balance=0;
        int deficient=0;
        int start=0;

        for(int i=0; i<n; i++){
            balance=balance+(gas[i]-cost[i]);
            if(balance < 0){
                start=i+1;
                deficient=deficient+balance;
                balance=0;
            }
        }
        if(balance+deficient >= 0){
            return start;
        }
        else{
            return -1;
        }
    }
};