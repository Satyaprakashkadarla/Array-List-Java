import java.util.Arrays;

public class FindTriplet {
    public static int[] findTriplet(int[] nums, int target) {
        int n = nums.length;
        for (int i = 0; i < n - 2; i++) {
            int left = i + 1;
            int right = n - 1;
            while (left < right) {
                int currentSum = nums[i] + nums[left] + nums[right];
                if (currentSum == target) {
                    return new int[]{nums[i], nums[left], nums[right]}; // Found the triplet
                } else if (currentSum < target) {
                    left++; // Increment left pointer
                } else {
                    right--; // Decrement right pointer
                }
            }
        }
        return new int[0]; // No triplet found
    }

    public static void main(String[] args) {
        int[] nums = {2, 3, 4, 6, 8, 9, 11};
        int target = 20;
        int[] result = findTriplet(nums, target);
        if (result.length > 0) {
            System.out.println(Arrays.toString(result)); // Output: [3, 8, 9]
        } else {
            System.out.println("No triplet found");
        }
    }
}
