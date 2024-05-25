import java.util.Arrays;

public class Main {
    public static void main(String[] args) {
        int[] numbers = {5, 2, 9, 1, 5, 6};

        // Sort in ascending order
        Arrays.sort(numbers);

        // Print sorted array
        System.out.print("Sorted array: ");
        for (int num : numbers) {
            System.out.print(num + " ");
        }
        System.out.println();
    }
}
