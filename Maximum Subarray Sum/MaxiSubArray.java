public class MaximumSubarraySum {

    public static int maxSubarraySum(int[] arr) {
        int maxSum = arr[0];  // Initialize maxSum with the first element of the array
        int currentSum = arr[0];  // Initialize currentSum with the first element of the array

        // Loop over each element in the array starting from the second element
        for (int i = 1; i < arr.length; i++) {
            // Check if continuing the current subarray or starting a new subarray is better
            currentSum = Math.max(arr[i], currentSum + arr[i]);
            // Update maxSum if currentSum is greater
            maxSum = Math.max(maxSum, currentSum);
        }

        return maxSum;
    }

    public static void main(String[] args) {
        int[] arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
        System.out.println("Maximum subarray sum: " + maxSubarraySum(arr));
    }
}
