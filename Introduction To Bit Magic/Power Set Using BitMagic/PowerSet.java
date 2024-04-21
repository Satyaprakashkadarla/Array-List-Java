import java.util.ArrayList;
import java.util.List;

public class PowerSetGenerator {
    // Function to generate the power set of a given set
    public static List<List<Integer>> generatePowerSet(int[] nums) {
        int n = nums.length;
        List<List<Integer>> powerSet = new ArrayList<>();

        // Iterate through all possible binary numbers of length n
        for (int i = 0; i < (1 << n); ++i) {
            List<Integer> subset = new ArrayList<>();

            // Iterate through the elements of nums
            for (int j = 0; j < n; ++j) {
                // Check if the jth bit of binary number i is set
                if ((i & (1 << j)) != 0) {
                    // If the bit is set, add the corresponding element to the subset
                    subset.add(nums[j]);
                }
            }

            // Add the subset to the power set
            powerSet.add(subset);
        }

        return powerSet;
    }

    public static void main(String[] args) {
        // Example usage:
        int[] nums = {1, 2, 3};
        List<List<Integer>> powerSet = generatePowerSet(nums);

        // Print the power set
        System.out.println("Power set:");
        for (List<Integer> subset : powerSet) {
            System.out.println(subset);
        }
    }
}
