#include <stdio.h>

int findPeakElement(int nums[], int numsSize) {
    int left = 0;
    int right = numsSize - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Check if mid is a peak
        if ((mid == 0 || nums[mid] >= nums[mid - 1]) &&
            (mid == numsSize - 1 || nums[mid] >= nums[mid + 1])) {
            return mid;
        } else if (mid > 0 && nums[mid - 1] > nums[mid]) {
            right = mid - 1; // If the left neighbor is greater, move right
        } else {
            left = mid + 1; // Otherwise, move left
        }
    }

    return -1; // No peak found
}

int main() {
    int nums[] = {1, 2, 3, 1};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int peakIndex = findPeakElement(nums, numsSize);
    printf("Peak element index: %d\n", peakIndex); // Output: 2 (index of 3)
    return 0;
}
