// Function to find the single element
function findSingleElement(nums) {
    // Initialize result to 0
    let result = 0;

    // Iterate through each number in the array
    for (let num of nums) {
        // XOR the current number with the result
        // This effectively cancels out paired elements
        // leaving the single element
        result ^= num;
    }

    // Return the single element
    return result;
}

// Example usage:
const arr = [4, 3, 6, 2, 2, 3, 4];
console.log(findSingleElement(arr));  // Output: 6
