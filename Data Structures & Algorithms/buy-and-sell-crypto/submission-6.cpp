class Solution {
   public:
    int maxProfit(vector<int>& prices) {

        int n = prices.size();

        int maxProfit = 0;

        int mini = prices[0];

        for (int i = 1; i < n; i++) {
            int profit = prices[i] - mini;
            maxProfit = max(maxProfit, profit);
            mini = min(mini, prices[i]);
        }
        return maxProfit;
    }
};

/*
        int n = prices.size();

        int buy = 0;
        int sell = 1;

        int maxiProfit = 0;

        while(sell < n) {

            if (prices[buy] < prices[sell]) {

                int profit = prices[sell] - prices[buy];
                maxiProfit = max(maxiProfit, profit);
            }

            else {
                buy = sell;
            }
            sell++;
        }
        return maxiProfit;
*/

/*
    int maxProfit(vector<int>& prices) {

        int n = prices.size();

        int buy = 0;
        int sell = 1;

        int maxiProfit = 0;

        for (int i = 0; i < n - 1; i++) {

            if (prices[buy] < prices[sell]) {

                int profit = prices[sell] - prices[buy];
                maxiProfit = max(maxiProfit, profit);
            }

            else {
                buy = sell;
            }
            sell++;
        }

        return maxiProfit;
*/
