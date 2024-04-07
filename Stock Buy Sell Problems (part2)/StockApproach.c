#include <stdio.h>

int maxProfit(int prices[], int n) {
    int maxProfit = 0;
    for (int i = 1; i < n; i++) {
        if (prices[i] > prices[i - 1]) {
            maxProfit += prices[i] - prices[i - 1];
        }
    }
    return maxProfit;
}

int main() {
    int prices[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(prices) / sizeof(prices[0]);
    printf("Maximum profit: %d\n", maxProfit(prices, n)); // Output: 7 (buy at 1, sell at 5, buy at 3, sell at 6)
    return 0;
}


Explanation:

/The maxProfit function takes an array of prices prices and its size n as input and returns the maximum profit that can be obtained by buying and selling a stock at most once using the Valley Peak Approach.
Inside the function, maxProfit is initialized to 0.
It iterates through the prices array starting from the second price.
If the current price is higher than the previous price, it adds the difference between the current price and the previous price to maxProfit.
Finally, it returns maxProfit.
In the main function, the maxProfit function is called with an example array prices, and the maximum profit is printed./