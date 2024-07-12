public class ConsecutiveOnes {
    public static int findMaxConsecutiveOnes(int[] nums) {
        int maxOnes = 0;
        int currentOnes = 0;

        for (int num : nums) {
            if (num == 1) {
                currentOnes++;
                maxOnes = Math.max(maxOnes, currentOnes);
            } else {
                currentOnes = 0;
            }
        }

        return maxOnes;
    }

    public static void main(String[] args) {
        int[] nums = {0, 0, 0, 1, 1, 1, 1, 0, 0};
        System.out.println("Maximum consecutive ones: " + findMaxConsecutiveOnes(nums)); // Output: 4
    }
}