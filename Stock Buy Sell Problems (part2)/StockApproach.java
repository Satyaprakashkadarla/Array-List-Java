//Here's a real-time example of the Valley Peak Approach implemented in Java for the "Stock Buy Sell" problem:


public class StockBuySell {
    public static int maxProfit(int[] prices) {
        int maxProfit = 0;
        for (int i = 1; i < prices.length; i++) {
            if (prices[i] > prices[i - 1]) {
                maxProfit += prices[i] - prices[i - 1];
            }
        }
        return maxProfit;
    }

    public static void main(String[] args) {
        int[] prices = {7, 1, 5, 3, 6, 4};
        int maxProfit = maxProfit(prices);
        System.out.println("Maximum profit: " + maxProfit); // Output: 7 (buy at 1, sell at 5, buy at 3, sell at 6)
    }
}

Explanation:

In this Java code, the maxProfit method takes an integer array prices as input and returns the maximum profit that can be obtained by buying and selling a stock at most once using the Valley Peak Approach.
Inside the method, maxProfit is initialized to 0.
It iterates through the prices array starting from the second price.
If the current price is higher than the previous price, it adds the difference between the current price and the previous price to maxProfit.
Finally, it returns maxProfit.
In the main method, the maxProfit function is called with an example array prices, and the maximum profit is printed.