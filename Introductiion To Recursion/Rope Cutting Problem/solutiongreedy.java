import java.util.Arrays;

public class GreedyRopeCut {
    // Function to implement the greedy rope cutting algorithm
    public static int greedyRopeCut(int ropeLength, int[] desiredLengths) {
        // Sort the desired lengths in descending order
        Arrays.sort(desiredLengths);
        reverse(desiredLengths);

        int cuts = 0;
        int remainingLength = ropeLength;

        // Iterate through desired lengths
        for (int length : desiredLengths) {
            // Check if remaining length is greater than or equal to desired length
            while (remainingLength >= length) {
                // Cut the rope at the desired length
                remainingLength -= length;
                // Increment cuts counter
                cuts++;
            }
        }

        // Return the total number of cuts
        return cuts;
    }

    // Function to reverse an array in-place
    private static void reverse(int[] arr) {
        int left = 0, right = arr.length - 1;
        while (left < right) {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }
    }

    public static void main(String[] args) {
        int ropeLength = 10;
        int[] desiredLengths = {3, 5, 7};

        int minCuts = greedyRopeCut(ropeLength, desiredLengths);
        System.out.println("Minimum cuts using greedy algorithm: " + minCuts);
    }
}
