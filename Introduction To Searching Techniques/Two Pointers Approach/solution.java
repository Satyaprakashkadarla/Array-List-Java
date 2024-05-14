public class TwoSum {
    public int[] twoSum(int[] nums, int target) {
        int left = 0;
        int right = nums.length - 1;
        
        while (left < right) {
            int currentSum = nums[left] + nums[right];
            if (currentSum == target) {
                return new int[]{nums[left], nums[right]}; // Found the pair
            } else if (currentSum < target) {
                left++; // Move left pointer to the right
            } else {
                right--; // Move right pointer to the left
            }
        }
        
        return new int[0]; // No pair found
    }

    public static void main(String[] args) {
        int[] nums = {2, 7, 11, 15};
        int target = 9;
        TwoSum solution = new TwoSum();
        int[] result = solution.twoSum(nums, target);
        System.out.println(Arrays.toString(result)); // Output: [2, 7]
    }
}
