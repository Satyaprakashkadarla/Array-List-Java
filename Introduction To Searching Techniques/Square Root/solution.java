import java.util.Arrays;

public class Main {
    // Custom comparison function to compare numbers by their square roots
    static class CompareBySqrt implements java.util.Comparator<Integer> {
        public int compare(Integer a, Integer b) {
            double sqrt_a = Math.sqrt(a);
            double sqrt_b = Math.sqrt(b);

            return Double.compare(sqrt_a, sqrt_b);
        }
    }

    public static void main(String[] args) {
        Integer[] arr = {16, 25, 9, 4, 36};

        // Sorting the array by square roots
        Arrays.sort(arr, new CompareBySqrt());

        // Printing the sorted array
        System.out.print("Sorted array: ");
        for (int num : arr) {
            System.out.print(num + " ");
        }
    }
}
