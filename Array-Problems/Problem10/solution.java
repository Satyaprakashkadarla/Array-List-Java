public int longestIncreasingSubsequence(int[] nums) {
    int[] dp = new int[nums.length];
    Arrays.fill(dp, 1);
    for (int i = 1; i < nums.length; i++) {
        for (int j = 0; j < i; j++) {
            if (nums[i] > nums[j]) {
                dp[i] = Math.max(dp[i], dp[j] + 1);
            }
        }
    }
    int max = 0;
    for (int i = 0; i < dp.length; i++) {
        max = Math.max(max, dp[i]);
    }
    return max;
}