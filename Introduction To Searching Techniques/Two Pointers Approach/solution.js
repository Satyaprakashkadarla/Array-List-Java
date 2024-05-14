function twoSum(nums, target) {
    let left = 0;
    let right = nums.length - 1;
    
    while (left < right) {
        const currentSum = nums[left] + nums[right];
        if (currentSum === target) {
            return [nums[left], nums[right]]; // Found the pair
        } else if (currentSum < target) {
            left++; // Move left pointer to the right
        } else {
            right--; // Move right pointer to the left
        }
    }
    
    return []; // No pair found
}

// Example usage:
const nums = [2, 7, 11, 15];
const target = 9;
console.log(twoSum(nums, target)); // Output: [2, 7]
