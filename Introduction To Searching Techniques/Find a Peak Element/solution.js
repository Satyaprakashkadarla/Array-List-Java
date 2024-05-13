function findPeakElement(nums) {
    let left = 0;
    let right = nums.length - 1;

    while (left <= right) {
        let mid = left + Math.floor((right - left) / 2);

        // Check if mid is a peak
        if ((mid === 0 || nums[mid] >= nums[mid - 1]) &&
            (mid === nums.length - 1 || nums[mid] >= nums[mid + 1])) {
            return mid;
        } else if (mid > 0 && nums[mid - 1] > nums[mid]) {
            right = mid - 1; // If the left neighbor is greater, move right
        } else {
            left = mid + 1; // Otherwise, move left
        }
    }

    return -1; // No peak found
}

const nums = [1, 2, 3, 1];
const peakIndex = findPeakElement(nums);
console.log("Peak element index:", peakIndex); // Output: 2 (index of 3)
