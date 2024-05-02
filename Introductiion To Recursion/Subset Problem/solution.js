function subsetSum(nums, target) {
    const n = nums.length;
    const dp = Array.from({ length: n + 1 }, () => Array(target + 1).fill(false));

    // Base case: if the target is 0, then there's always a subset (empty set) that sums up to 0
    for (let i = 0; i <= n; i++) {
        dp[i][0] = true;
    }

    // Build up the solution table
    for (let i = 1; i <= n; i++) {
        for (let j = 1; j <= target; j++) {
            if (nums[i - 1] > j) {
                dp[i][j] = dp[i - 1][j];
            } else {
                dp[i][j] = dp[i - 1][j] || dp[i - 1][j - nums[i - 1]];
            }
        }
    }

    // The solution to the problem is in the bottom-right cell of the table
    return dp[n][target];
}

// Example usage:
const nums = [3, 34, 4, 12, 5, 2];
const target = 9;
console.log(subsetSum(nums, target)); // Output: true
