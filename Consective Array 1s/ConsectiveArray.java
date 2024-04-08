import java.util.Arrays;

public class Main {
    public static int findMaxConsecutiveOnes(int[] nums) {
        int maxCount = 0; // Initialize variable to store maximum consecutive 1s
        int currentCount = 0; // Initialize variable to store current consecutive 1s
        
        // Iterate through the array
        for (int num : nums) {
            if (num == 1) { // If the current element is 1
                currentCount++; // Increment the count of consecutive 1s
            } else { // If the current element is not 1 (i.e., it's 0)
                maxCount = Math.max(maxCount, currentCount); // Update maxCount with the maximum consecutive 1s encountered so far
                currentCount = 0; // Reset currentCount to 0 for the next potential consecutive sequence
            }
        }
        
        // Check for the maximum consecutive 1s encountered at the end of the array
        return Math.max(maxCount, currentCount);
    }

    public static void main(String[] args) {
        int[] nums = {1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1};
        System.out.println("Maximum consecutive 1s: " + findMaxConsecutiveOnes(nums)); // Output: 4
    }
}
