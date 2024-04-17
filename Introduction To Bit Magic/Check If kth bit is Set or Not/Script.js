// Function to check if the k-th bit is set or not
function isKthBitSet(n, k) {
    // Create a mask with only the k-th bit set
    let mask = 1 << k;
    // Perform a bitwise AND operation between the mask and the number n
    let result = n & mask;
    // If the result is non-zero, then the k-th bit is set
    return result !== 0;
}

// Example usage
let n = 5; // Binary representation: 101
let k = 2; // Check if the 2nd bit (from right to left) is set
if (isKthBitSet(n, k)) {
    console.log("The " + k + "-th bit is set.");
} else {
    console.log("The " + k + "-th bit is not set.");
}
