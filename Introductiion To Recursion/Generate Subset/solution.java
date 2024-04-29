import java.util.ArrayList;
import java.util.List;

public class SubsetGenerator {

    // Function to generate all subsets of a given set
    public static List<List<Integer>> generateSubsets(int[] set) {
        List<List<Integer>> subsets = new ArrayList<>();
        int n = set.length;
        
        // Iterate through all binary numbers from 0 to 2^n - 1
        for (int i = 0; i < (1 << n); i++) {
            List<Integer> subset = new ArrayList<>();
            
            // Iterate through each bit of the current binary number
            for (int j = 0; j < n; j++) {
                // Check if j-th bit of i is set
                if ((i & (1 << j)) != 0) {
                    // If set, add the corresponding element from the original set to the subset
                    subset.add(set[j]);
                }
            }
            
            // Add the current subset to the list of subsets
            subsets.add(subset);
        }
        
        // Return the list of subsets
        return subsets;
    }

    public static void main(String[] args) {
        // Example usage
        int[] set = {1, 2, 3};
        List<List<Integer>> subsets = generateSubsets(set);
        
        // Print all subsets
        for (List<Integer> subset : subsets) {
            System.out.println(subset);
        }
    }
}
