 Insertion Sort with a binary search to find the insertion point
public class InsertionSort {
    public static void main(String[] args) {
        int[] arr = {5, 2, 8, 3, 1, 6, 4};
        insertionSort(arr);
        System.out.println("Sorted array: " + Arrays.toString(arr));
    }

    public static void insertionSort(int[] arr) {
        for (int i = 1; i < arr.length; i++) {
            int key = arr[i];
            int j = binarySearch(arr, 0, i - 1, key);
            System.arraycopy(arr, j, arr, j + 1, i - j);
            arr[j] = key;
        }
    }

    public static int binarySearch(int[] arr, int low, int high, int key) {
        while (low <= high) {
            int mid = (low + high) / 2;
            if (arr[mid] < key) {
                low = mid + 1;
            } else if (arr[mid] > key) {
                high = mid - 1;
            } else {
                return mid;
            }
        }
        return low;
    }
}