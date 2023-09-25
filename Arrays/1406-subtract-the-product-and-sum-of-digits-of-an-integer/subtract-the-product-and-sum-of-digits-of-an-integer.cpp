class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0,prod=1,rem,ans=0;
        while(n!=0){
            rem=n%10;
            sum=sum+rem;
            prod=prod*rem;
            n=n/10;
        }
        return ans=prod-sum;
        
    }
};