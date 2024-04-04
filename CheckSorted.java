//Certainly! Here's how you can implement the algorithm to check if an array is sorted in Java:


public class ArraySortCheck {
    
    public static boolean isSorted(int[] arr) {
        int n = arr.length;
        for (int i = 0; i < n - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                return false;
            }
        }
        return true;
    }

    public static void main(String[] args) {
        int[] arr1 = {1, 2, 3, 4, 5};
        int[] arr2 = {3, 1, 4, 2, 5};

        System.out.println("Is arr1 sorted? " + isSorted(arr1)); // Output: true
        System.out.println("Is arr2 sorted? " + isSorted(arr2)); // Output: false
    }
}
