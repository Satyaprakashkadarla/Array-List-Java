import java.util.Arrays;

public class ReverseArray {
    
    public static int[] reverseArray(int[] arr) {
        int n = arr.length;
        int[] reversedArr = new int[n];
        int j = n - 1;
        for (int i = 0; i < n; i++) {
            reversedArr[j] = arr[i];
            j--;
        }
        return reversedArr;
    }

    public static void main(String[] args) {
        int[] arr = {1, 2, 3, 4, 5};
        int[] reversedArr = reverseArray(arr);
        System.out.println("Original Array: " + Arrays.toString(arr));
        System.out.println("Reversed Array: " + Arrays.toString(reversedArr));
    }
}
