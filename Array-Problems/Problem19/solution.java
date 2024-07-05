public class RecursiveArrayReverse {

    public static void reverse(int[] arr, int start, int end) {
        if (start >= end) {
            return;
        }
        // Swap elements at start and end indices
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        // Recursive call to reverse the remaining array
        reverse(arr, start + 1, end - 1);
    }

    public static void main(String[] args) {
        int[] array = {1, 2, 3, 4, 5};
        System.out.println("Original array: " + Arrays.toString(array));
        reverse(array, 0, array.length - 1);
        System.out.println("Reversed array: " + Arrays.toString(array)); // Output: Reversed array: [5, 4, 3, 2, 1]
    }
}
