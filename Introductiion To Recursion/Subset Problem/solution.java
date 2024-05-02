public class SubsetSum {
    public static boolean subsetSum(int[] nums, int target) {
        int n = nums.length;
        boolean[][] dp = new boolean[n + 1][target + 1];

        // Base case: if the target is 0, then there's always a subset (empty set) that sums up to 0
        for (int i = 0; i <= n; i++)
            dp[i][0] = true;

        // Build up the solution table
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= target; j++) {
                if (nums[i - 1] > j)
                    dp[i][j] = dp[i - 1][j];
                else
                    dp[i][j] = dp[i - 1][j] || dp[i - 1][j - nums[i - 1]];
            }
        }

        // The solution to the problem is in the bottom-right cell of the table
        return dp[n][target];
    }

    public static void main(String[] args) {
        int[] nums = {3, 34, 4, 12, 5, 2};
        int target = 9;
        System.out.println(subsetSum(nums, target)); // Output: true
    }
}
