class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int buy=INT_MAX;
        for(int i=0;i<prices.size();i++)
        {
            buy = min(prices[i], buy);// buying price should be minimum
            profit = max(profit, prices[i]-buy); //profit should be maximum
        }
        return profit;
    }
};