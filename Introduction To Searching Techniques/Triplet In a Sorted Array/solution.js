function findTriplet(nums, target) {
    const n = nums.length;
    for (let i = 0; i < n - 2; i++) {
        let left = i + 1;
        let right = n - 1;
        while (left < right) {
            const currentSum = nums[i] + nums[left] + nums[right];
            if (currentSum === target) {
                return [nums[i], nums[left], nums[right]]; // Found the triplet
            } else if (currentSum < target) {
                left++; // Increment left pointer
            } else {
                right--; // Decrement right pointer
            }
        }
    }
    return []; // No triplet found
}

// Example usage:
const nums = [2, 3, 4, 6, 8, 9, 11];
const target = 20;
const result = findTriplet(nums, target);
if (result.length > 0) {
    console.log(result); // Output: [3, 8, 9]
} else {
    console.log("No triplet found");
}
