public class MaxConsecutiveZeros {
    public static int findMaxConsecutiveZeros(int[] nums) {
        int maxCount = 0;
        int currentCount = 0;

        for (int num : nums) {
            if (num == 0) {
                currentCount++;
                maxCount = Math.max(maxCount, currentCount);
            } else {
                currentCount = 0;
            }
        }

        return maxCount;
    }

    public static void main(String[] args) {
        int[] nums = {1, 0, 0, 1, 0, 0, 0};
        System.out.println("Maximum consecutive 0s: " + findMaxConsecutiveZeros(nums));
    }
}
import java.util.HashMap;

public class LongestEqualSubarray {
    public static int findMaxLength(int[] nums) {
        HashMap<Integer, Integer> map = new HashMap<>();
        map.put(0, -1);
        int maxLength = 0, count = 0;

        for (int i = 0; i < nums.length; i++) {
            count += nums[i] == 1 ? 1 : -1;
            if (map.containsKey(count)) {
                maxLength = Math.max(maxLength, i - map.get(count));
            } else {
                map.put(count, i);
            }
        }

        return maxLength;
    }

    public static void main(String[] args) {
        int[] nums = {0, 1, 0, 0, 1, 1, 0};
        System.out.println("Longest subarray with equal 0s and 1s: " + findMaxLength(nums));
    }
}
