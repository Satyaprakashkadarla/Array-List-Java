public class RecursiveArraySum {

    public static int sum(int[] arr, int n) {
        if (n <= 0) {
            return 0;
        } else {
            return arr[n - 1] + sum(arr, n - 1);
        }
    }

    public static void main(String[] args) {
        int[] array = {1, 2, 3, 4, 5};
        int result = sum(array, array.length);
        System.out.println("Sum of array elements: " + result); // Output: Sum of array elements: 15
    }
}
