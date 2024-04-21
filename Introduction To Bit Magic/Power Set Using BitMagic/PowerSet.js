// Function to generate the power set of a given set
function generatePowerSet(nums) {
    const n = nums.length;
    const powerSet = [];

    // Iterate through all possible binary numbers of length n
    for (let i = 0; i < (1 << n); ++i) {
        const subset = [];

        // Iterate through the elements of nums
        for (let j = 0; j < n; ++j) {
            // Check if the jth bit of binary number i is set
            if (i & (1 << j)) {
                // If the bit is set, add the corresponding element to the subset
                subset.push(nums[j]);
            }
        }

        // Add the subset to the power set
        powerSet.push(subset);
    }

    return powerSet;
}

// Example usage:
const nums = [1, 2, 3];
const powerSet = generatePowerSet(nums);

// Print the power set
console.log("Power set:");
powerSet.forEach(subset => console.log(subset));
