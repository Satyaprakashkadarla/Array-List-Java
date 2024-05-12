import java.util.Arrays;

public class Main {
    // Binary search function
    static int binarySearch(int target, int[] arr, int start, int end) {
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (arr[mid] == target)
                return mid;
            else if (arr[mid] < target)
                start = mid + 1;
            else
                end = mid - 1;
        }
        return -1;
    }

    // Function to search in infinite-sized array
    static int infiniteArraySearch(int target, int[] arr) {
        int start = 0;
        int end = 1;
        // Doubling the range until the target is within the range
        while (arr[end] < target) {
            start = end;
            end *= 2;
        }
        // Perform binary search within the found range
        return binarySearch(target, arr, start, end);
    }

    public static void main(String[] args) {
        int[] arr = {0, 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21}; // Example array
        int target = 13; // Example target
        int index = infiniteArraySearch(target, arr);
        if (index != -1)
            System.out.println("Target found at index: " + index);
        else
            System.out.println("Target not found in the array.");
    }
}
