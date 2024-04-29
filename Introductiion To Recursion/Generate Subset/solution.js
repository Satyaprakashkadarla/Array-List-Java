// Function to generate all subsets of a given set
function generateSubsets(set) {
    const subsets = [];
    const n = set.length;

    // Iterate through all binary numbers from 0 to 2^n - 1
    for (let i = 0; i < (1 << n); i++) {
        const subset = [];

        // Iterate through each bit of the current binary number
        for (let j = 0; j < n; j++) {
            // Check if j-th bit of i is set
            if (i & (1 << j)) {
                // If set, add the corresponding element from the original set to the subset
                subset.push(set[j]);
            }
        }

        // Add the current subset to the list of subsets
        subsets.push(subset);
    }

    // Return the list of subsets
    return subsets;
}

// Example usage
const set = [1, 2, 3];
const subsets = generateSubsets(set);

// Print all subsets
subsets.forEach(subset => console.log(subset));
