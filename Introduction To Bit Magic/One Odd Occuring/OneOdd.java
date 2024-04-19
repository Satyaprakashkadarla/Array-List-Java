public class SingleElementFinder {

    // Function to find the single element
    public static int findSingleElement(int[] nums) {
        // Initialize result to 0
        int result = 0;

        // Iterate through each number in the array
        for (int num : nums) {
            // XOR the current number with the result
            // This effectively cancels out paired elements
            // leaving the single element
            result ^= num;
        }

        // Return the single element
        return result;
    }

    public static void main(String[] args) {
        // Example usage:
        int[] arr = {4, 3, 6, 2, 2, 3, 4};
        System.out.println(findSingleElement(arr));  // Output: 6
    }
}
