public class LeftRotateByOne {
    public static void leftRotateByOne(int[] arr) {
        // Store the first element in a temporary variable
        int temp = arr[0];

        // Shift all elements one position to the left
        for (int i = 1; i < arr.length; i++) {
            arr[i - 1] = arr[i];
        }

        // Place the temporary variable at the end
        arr[arr.length - 1] = temp;
    }

    public static void main(String[] args) {
        int[] arr = {1, 2, 3, 4, 5};

        // Print original array
        System.out.println("Original Array:");
        for (int num : arr) {
            System.out.print(num + " ");
        }

        // Left rotate the array by one position
        leftRotateByOne(arr);

        // Print array after left rotation
        System.out.println("\nArray after left rotation by one position:");
        for (int num : arr) {
            System.out.print(num + " ");
        }
    }
}
