//Certainly! Here are examples of removing duplicates from a sorted array in Java


public class RemoveDuplicates {
    public static int removeDuplicates(int[] sortedArray) {
        if (sortedArray.length == 0) {
            return 0; // Empty array case
        }

        // Initialize a variable to keep track of the next position to place a non-duplicate element
        int nextNonDuplicateIndex = 1;

        // Iterate through the array starting from the second element
        for (int i = 1; i < sortedArray.length; i++) {
            // If the current element is not equal to the previous element, it's a non-duplicate
            if (sortedArray[i] != sortedArray[nextNonDuplicateIndex - 1]) {
                // Place the non-duplicate element at the next position
                sortedArray[nextNonDuplicateIndex] = sortedArray[i];
                // Move to the next position for the next non-duplicate element
                nextNonDuplicateIndex++;
            }
        }

        return nextNonDuplicateIndex; // Return the length of the array without duplicates
    }

    public static void main(String[] args) {
        int[] sortedArray = {1, 1, 2, 3, 3, 4, 5, 5, 5, 6};
        int newLength = removeDuplicates(sortedArray);
        System.out.print("Array with duplicates removed: ");
        for (int i = 0; i < newLength; i++) {
            System.out.print(sortedArray[i] + " ");
        }
    }
}
