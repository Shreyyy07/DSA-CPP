class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit=INT_MIN;
        int mini_price=INT_MAX;

        for(int i=0; i<prices.size(); i++){
            mini_price=min(mini_price,prices[i]);
            max_profit=max(max_profit,prices[i]-mini_price);
        }
        return max_profit;
    }
};