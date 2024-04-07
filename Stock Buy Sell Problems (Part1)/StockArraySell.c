#include <stdio.h>
#include <limits.h>

int maxProfit(int prices[], int n) {
    int minPrice = INT_MAX; // Initialize minPrice to maximum integer value
    int maxProfit = 0; // Initialize maxProfit to 0
    for (int i = 0; i < n; i++) {
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        } else if (prices[i] - minPrice > maxProfit) {
            maxProfit = prices[i] - minPrice;
        }
    }
    return maxProfit;
}

int main() {
    int prices[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(prices) / sizeof(prices[0]);
    printf("Maximum profit: %d\n", maxProfit(prices, n)); // Output: 5 (buy at 1, sell at 6)
    return 0;
}


//The maxProfit function takes an integer array prices and its size n as input arguments and returns the maximum profit that can be obtained by buying and selling a stock at most once.
Inside the function, minPrice is initialized to INT_MAX from limits.h to represent positive infinity, and maxProfit is initialized to 0.
It iterates through the prices array, updating minPrice and maxProfit accordingly.
The main function demonstrates the usage of the maxProfit function with an example array prices, and prints the maximum profit.//