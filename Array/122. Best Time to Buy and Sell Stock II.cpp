buying at day  = low
selling at day = high

the range [low, high] should be chosen so that the sub
profit is maximum.

sub-profit = prices[j] - prices[i]

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int low = 0, buy, sell, profit = 0, high = prices.size() - 1;
        while (low < high) {
            while (low < high && prices[low + 1] <= prices[low]) low++;
            buy = prices[low];

            while (low < high && prices[low + 1] > prices[low]) low++;
            sell = prices[low];

            profit += sell - buy;
        }
        return profit;
    }
}; 
