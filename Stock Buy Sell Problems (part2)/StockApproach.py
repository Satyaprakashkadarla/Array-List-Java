def maxProfit(prices):
    max_profit = 0
    for i in range(1, len(prices)):
        if prices[i] > prices[i - 1]:
            max_profit += prices[i] - prices[i - 1]
    return max_profit

# Example usage
prices = [7, 1, 5, 3, 6, 4]
print("Maximum profit:", maxProfit(prices))  # Output: 7 (buy at 1, sell at 5, buy at 3, sell at 6)


Explanation:

'''The maxProfit function takes a list of prices as input and returns the maximum profit that can be obtained by buying and selling a stock at most once using the Valley Peak Approach.
Inside the function, max_profit is initialized to 0.
It iterates through the prices array starting from the second price.
If the current price is higher than the previous price, it adds the difference between the current price and the previous price to max_profit.
Finally, it returns max_profit.
In the example usage, the maxProfit function is called with an example list prices, and the maximum profit is printed.'''