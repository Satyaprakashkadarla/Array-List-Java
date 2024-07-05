public class RecursiveArraySearch {

    public static int search(int[] arr, int key, int index) {
        if (index >= arr.length) {
            return -1; // key not found
        } else if (arr[index] == key) {
            return index; // key found at index
        } else {
            return search(arr, key, index + 1); // recursive call
        }
    }

    public static void main(String[] args) {
        int[] array = {4, 2, 9, 7, 1, 3};
        int key = 7;
        int index = search(array, key, 0);
        if (index != -1) {
            System.out.println("Key " + key + " found at index " + index); // Output: Key 7 found at index 3
        } else {
            System.out.println("Key " + key + " not found in array");
        }
    }
}
