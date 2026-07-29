// Last updated: 7/29/2026, 2:27:47 PM
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int minPrice = INT_MAX;
        int maxProfit = 0;

        for(int i = 0; i < n; i++) {
            if(prices[i] < minPrice)
                minPrice = prices[i];  // update buying price
            else if(prices[i] - minPrice > maxProfit)
                maxProfit = prices[i] - minPrice;  // update selling profit
        }

        return maxProfit;
    }
};
