class Solution {
   public:
    int maxProfit(vector<int>& prices) {

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
    }
};


/*
class Solution {
   public:
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
    }
};
*/
