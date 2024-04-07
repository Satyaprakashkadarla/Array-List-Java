public class StockBuySell {
    public static int maxProfit(int[] prices) {
        int minPrice = Integer.MAX_VALUE; // Initialize minPrice to maximum integer value
        int maxProfit = 0; // Initialize maxProfit to 0
        for (int price : prices) {
            if (price < minPrice) {
                minPrice = price;
            } else if (price - minPrice > maxProfit) {
                maxProfit = price - minPrice;
            }
        }
        return maxProfit;
    }

    public static void main(String[] args) {
        int[] prices = {7, 1, 5, 3, 6, 4};
        System.out.println("Maximum profit: " + maxProfit(prices)); // Output: 5 (buy at 1, sell at 6)
    }
}


In this Java code:

//maxProfit method takes an integer array prices as input and returns the maximum profit that can be obtained by buying and selling a stock at most once.

*Inside the method, minPrice is initialized to Integer.MAX_VALUE to represent positive infinity, and maxProfit is initialized to 0.

*It iterates through the prices array, updating minPrice and maxProfit accordingly.

*The main method demonstrates the usage of the maxProfit method with an example array prices, and prints the maximum profit.//