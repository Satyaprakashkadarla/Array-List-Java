def maxProfit(prices):
    minPrice = float('inf')  # Initialize minPrice to positive infinity
    maxProfit = 0  # Initialize maxProfit to 0
    for price in prices:
        if price < minPrice:
            minPrice = price
        elif price - minPrice > maxProfit:
            maxProfit = price - minPrice
    return maxProfit

# Example usage
prices = [7, 1, 5, 3, 6, 4]
print("Maximum profit:", maxProfit(prices))  # Output: 5 (buy at 1, sell at 6)


"""This code defines the maxProfit function that takes a list of prices as input and returns the maximum profit that can be obtained by buying and selling a stock at most once. It iterates through the prices array, keeping track of the minimum price seen so far (minPrice) and updating the maximum profit (maxProfit) if a higher profit is found. Finally, it returns the maxProfit.

In the example usage, the function is called with a list of prices [7, 1, 5, 3, 6, 4], and it prints the maximum profit, which is 5 in this case (buy at 1, sell at 6)."""






