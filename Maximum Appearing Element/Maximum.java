import java.util.Arrays;

public class MaximumAppearingElement {

    public static int maxAppearingElement(int[][] intervals) {
        final int SIZE = 1000000; // Define the size of the count array
        int[] count = new int[SIZE]; // Initialize an array count of size SIZE with all elements set to 0

        // Iterate through each interval in intervals
        for (int[] interval : intervals) {
            // Increment count[start] by 1
            count[interval[0]]++;
            // Decrement count[end] by 1
            count[interval[1]]--;
        }

        int maxCount = 0;
        int maxElement = 0;
        int currentCount = 0;

        // Iterate through each element in count
        for (int i = 0; i < SIZE; i++) {
            // Add count[i] to currentCount
            currentCount += count[i];
            // If currentCount is greater than maxCount
            if (currentCount > maxCount) {
                // Set maxCount to currentCount
                maxCount = currentCount;
                // Set maxElement to i
                maxElement = i;
            }
        }

        return maxElement;
    }

    public static void main(String[] args) {
        // Example intervals
        int[][] intervals = {{1, 3}, {2, 5}, {9, 12}, {5, 8}};

        // Find the maximum appearing element
        int maxElement = maxAppearingElement(intervals);

        // Print the result
        System.out.println("Maximum appearing element: " + maxElement);
    }
}
