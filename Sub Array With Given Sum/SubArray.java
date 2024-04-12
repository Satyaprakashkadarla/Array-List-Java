public class SubarrayWithGivenSum {

    public static void findSubarrayWithGivenSum(int[] array, int givenSum) {
        int start = 0; // Initialize start pointer
        int end = 0;   // Initialize end pointer
        int currentSum = array[0]; // Initialize currentSum with first element

        while (end < array.length) {
            if (currentSum == givenSum) { // If currentSum equals givenSum, subarray found
                System.out.println("Subarray found from index " + start + " to " + end);
                return;
            } else if (currentSum < givenSum) { // If currentSum is less than givenSum, move end pointer forward
                end++;
                if (end < array.length) // Avoid accessing out of bounds
                    currentSum += array[end];
            } else { // If currentSum is greater than givenSum, move start pointer forward
                currentSum -= array[start];
                start++;
            }
        }
        System.out.println("Subarray not found"); // If no subarray found
    }

    public static void main(String[] args) {
        int[] array = {1, 4, 20, 3, 10, 5};
        int givenSum = 33;

        findSubarrayWithGivenSum(array, givenSum);
    }
}
