class Solution {
public:
    int countPrimes(int n) {
        int count=0;
       vector <bool>Prime(n+1,true);
       Prime[0]=Prime[1]=false;

       for(int i=2; i<n; i++){
           if(Prime[i]){
               count++;
        for(int j=2*i; j<n; j=j+i){
            Prime[j]=0;
        }
           }
       }
        return count;
    }
};