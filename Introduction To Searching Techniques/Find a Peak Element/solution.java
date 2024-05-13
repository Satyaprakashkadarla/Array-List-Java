public class Main {
    public static int findPeakElement(int[] nums) {
        int left = 0;
        int right = nums.length - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            // Check if mid is a peak
            if ((mid == 0 || nums[mid] >= nums[mid - 1]) &&
                (mid == nums.length - 1 || nums[mid] >= nums[mid + 1])) {
                return mid;
            } else if (mid > 0 && nums[mid - 1] > nums[mid]) {
                right = mid - 1; // If the left neighbor is greater, move right
            } else {
                left = mid + 1; // Otherwise, move left
            }
        }

        return -1; // No peak found
    }

    public static void main(String[] args) {
        int[] nums = {1, 2, 3, 1};
        int peakIndex = findPeakElement(nums);
        System.out.println("Peak element index: " + peakIndex); // Output: 2 (index of 3)
    }
}
