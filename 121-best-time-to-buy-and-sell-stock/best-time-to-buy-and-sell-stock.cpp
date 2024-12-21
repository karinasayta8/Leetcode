class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
    int maxProfit = 0;

    for (int price : prices) {
        // Update minimum price
        if (price < minPrice) {
            minPrice = price;
        }
        // Calculate potential profit and update maxProfit
        else {
            int profit = price - minPrice;
            if (profit > maxProfit) {
                maxProfit = profit;
            }
        }
    }

    return maxProfit;
    }
};