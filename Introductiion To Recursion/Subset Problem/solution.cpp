#include <iostream>
#include <vector>
using namespace std;

bool subsetSum(vector<int>& nums, int target) {
    int n = nums.size();
    vector<vector<bool>> dp(n + 1, vector<bool>(target + 1, false));

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

int main() {
    vector<int> nums = {3, 34, 4, 12, 5, 2};
    int target = 9;
    cout << (subsetSum(nums, target) ? "True" : "False") << endl; // Output: True
    return 0;
}
