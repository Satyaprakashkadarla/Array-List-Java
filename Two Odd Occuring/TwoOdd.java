import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class OddOccurrences {
    public static List<Integer> findOddOccurrences(int[] arr) {
        // Create a hash map to store the count of each element
        Map<Integer, Integer> countMap = new HashMap<>();

        // Step 1: Count occurrences of each element
        for (int num : arr) {
            countMap.put(num, countMap.getOrDefault(num, 0) + 1);
        }

        // Step 2: Find elements with odd occurrences
        List<Integer> result = new ArrayList<>();
        for (Map.Entry<Integer, Integer> entry : countMap.entrySet()) {
            if (entry.getValue() % 2 != 0) {
                result.add(entry.getKey());
            }
        }
        return result;
    }

    public static void main(String[] args) {
        int[] arr = {4, 3, 2, 4, 1, 3, 2, 1, 4, 4};
        List<Integer> oddOccurrences = findOddOccurrences(arr);

        System.out.print("Elements with odd occurrences:");
        for (int num : oddOccurrences) {
            System.out.print(" " + num);
        }
        System.out.println();
    }
}
