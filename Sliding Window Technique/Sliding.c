#include <stdio.h>

int maxSumSubarray(int nums[], int numsSize, int k) {
    int maxSum = 0;  // Variable to store the maximum sum
    int currentSum = 0;  // Variable to store the current sum

    // Calculate the sum of the first k elements
    for (int i = 0; i < k; i++) {
        currentSum += nums[i];
    }
    maxSum = currentSum;  // Initialize maxSum with the sum of the first k elements

    // Iterate through the array starting from index k
    for (int i = k; i < numsSize; i++) {
        // Add the current element and subtract the element k positions behind
        currentSum += nums[i] - nums[i - k];
        // Update maxSum if the current sum is greater
        if (currentSum > maxSum)
            maxSum = currentSum;
    }

    return maxSum;
}

int main() {
    int nums[] = {1, 3, -1, -3, 5, 3, 6, 7};  // Input array
    int numsSize = sizeof(nums) / sizeof(nums[0]);  // Size of the array
    int k = 3;  // Size of the subarray
    // Print the maximum sum of a subarray of size k
    printf("Maximum sum of subarray of size %d: %d\n", k, maxSumSubarray(nums, numsSize, k));
    return 0;
}
