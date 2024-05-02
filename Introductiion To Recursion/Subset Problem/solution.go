package main

import "fmt"

func subsetSum(nums []int, target int) bool {
    n := len(nums)
    dp := make([][]bool, n+1)
    for i := range dp {
        dp[i] = make([]bool, target+1)
    }

    // Base case: if the target is 0, then there's always a subset (empty set) that sums up to 0
    for i := 0; i <= n; i++ {
        dp[i][0] = true
    }

    // Build up the solution table
    for i := 1; i <= n; i++ {
        for j := 1; j <= target; j++ {
            if nums[i-1] > j {
                dp[i][j] = dp[i-1][j]
            } else {
                dp[i][j] = dp[i-1][j] || dp[i-1][j-nums[i-1]]
            }
        }
    }

    // The solution to the problem is in the bottom-right cell of the table
    return dp[n][target]
}

func main() {
    nums := []int{3, 34, 4, 12, 5, 2}
    target := 9
    fmt.Println(subsetSum(nums, target)) // Output: true
}
