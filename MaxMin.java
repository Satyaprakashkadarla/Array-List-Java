public class MaxMinNumberDSA {
    public static void main(String[] args) {
        int[] numbers = {5, 8, 2, 14, 7, 3};

        Pair result = findMaxMin(numbers, 0, numbers.length - 1); // Call the function to find max and min

        System.out.println("Maximum number: " + result.max);
        System.out.println("Minimum number: " + result.min);
    }

    // Define a Pair class to store both max and min values
    static class Pair {
        int max;
        int min;

        Pair(int max, int min) {
            this.max = max;
            this.min = min;
        }
    }

    // Function to find maximum and minimum recursively using Divide and Conquer approach
    public static Pair findMaxMin(int[] arr, int low, int high) {
        // If there's only one element, it's both max and min
        if (low == high) {
            return new Pair(arr[low], arr[low]);
        }
        // If there are two elements, compare and return the pair
        else if (high - low == 1) {
            return arr[low] > arr[high] ? new Pair(arr[low], arr[high]) : new Pair(arr[high], arr[low]);
        }
        // If there are more than two elements, divide and conquer
        else {
            int mid = (low + high) / 2; // Calculate the mid index
            // Recursively find max and min in left and right halves
            Pair leftPair = findMaxMin(arr, low, mid);
            Pair rightPair = findMaxMin(arr, mid + 1, high);
            // Combine results from left and right halves
            int max = Math.max(leftPair.max, rightPair.max);
            int min = Math.min(leftPair.min, rightPair.min);
            // Return the combined max and min
            return new Pair(max, min);
        }
    }
}
