import java.util.Arrays;

public class ArrayProblems {

    public static void reverseArray(int[] arr) {
        int start = 0;
        int end = arr.length - 1;
        while (start < end) {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    }

    public static void main(String[] args) {
        int[] arr = {3, 5, 1, 8, 4, 2};
        reverseArray(arr);
        System.out.println("Reversed Array: " + Arrays.toString(arr));
    }
}
