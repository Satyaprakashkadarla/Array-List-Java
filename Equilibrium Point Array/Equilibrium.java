import java.util.ArrayList;
import java.util.List;

public class EquilibriumPoint {

    public static List<Integer> equilibriumPoints(int[] arr) {
        List<Integer> equilibriumIndices = new ArrayList<>();
        int n = arr.length;

        // If the array is empty, return an empty list
        if (n == 0) {
            return equilibriumIndices;
        }

        // Calculate the total sum of all elements in the array
        int totalSum = 0;
        for (int num : arr) {
            totalSum += num;
        }

        // Initialize the left sum to 0
        int leftSum = 0;

        // Iterate through each element in the array to find equilibrium points
        for (int i = 0; i < n; i++) {
            // Reduce the total sum by the current element
            totalSum -= arr[i];

            // If the left sum equals the total sum, it's an equilibrium point
            if (leftSum == totalSum) {
                equilibriumIndices.add(i);
            }

            // Add the current element to the left sum
            leftSum += arr[i];
        }

        return equilibriumIndices;
    }

    public static void main(String[] args) {
        int[] arr = {-7, 1, 5, 2, -4, 3, 0};
        List<Integer> result = equilibriumPoints(arr);

        System.out.print("Equilibrium points: ");
        for (int i : result) {
            System.out.print(i + " ");
        }
        System.out.println();
    }
}
