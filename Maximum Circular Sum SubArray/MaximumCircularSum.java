public class MaximumCircularSum {

    // Function to find the maximum subarray sum using Kadane's algorithm
    public static int maxSubarraySum(int[] arr) {
        int maxSum = arr[0];
        int currentSum = arr[0];

        for (int i = 1; i < arr.length; i++) {
            currentSum = Math.max(arr[i], currentSum + arr[i]);
            maxSum = Math.max(maxSum, currentSum);
        }

        return maxSum;
    }

    // Function to find the minimum subarray sum, which is equivalent to the maximum subarray sum for the negative of the original array
    public static int minSubarraySum(int[] arr) {
        int[] negativeArr = new int[arr.length];
        for (int i = 0; i < arr.length; i++) {
            negativeArr[i] = -arr[i];
        }
        return -maxSubarraySum(negativeArr);
    }

    // Function to find the maximum circular sum
    public static int maxCircularSum(int[] arr) {
        int maxSum = maxSubarraySum(arr);
        int minSum = minSubarraySum(arr);
        int totalSum = 0;

        for (int num : arr) {
            totalSum += num;
        }

        int circularMax = Math.max(maxSum, totalSum - minSum);
        return circularMax;
    }

    public static void main(String[] args) {
        int[] arr = {8, -1, 3, 4};
        System.out.println("Maximum circular sum: " + maxCircularSum(arr));
    }
}
