def subset_sum(nums, target):
    n = len(nums)
    dp = [[False] * (target + 1) for _ in range(n + 1)]

    # Base case: if the target is 0, then there's always a subset (empty set) that sums up to 0
    for i in range(n + 1):
        dp[i][0] = True

    # Build up the solution table
    for i in range(1, n + 1):
        for j in range(1, target + 1):
            if nums[i - 1] > j:
                dp[i][j] = dp[i - 1][j]
            else:
                dp[i][j] = dp[i - 1][j] or dp[i - 1][j - nums[i - 1]]

    # The solution to the problem is in the bottom-right cell of the table
    return dp[n][target]

# Example usage:
nums = [3, 34, 4, 12, 5, 2]
target = 9
print(subset_sum(nums, target))  # Output: True
