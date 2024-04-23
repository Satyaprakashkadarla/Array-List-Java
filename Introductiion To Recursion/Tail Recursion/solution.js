// Function to calculate factorial using tail recursion
function factorial(n, acc = 1) {
    // Base case: if n is 0, return the accumulator
    if (n === 0) {
        return acc;
    } 
    // Recursive case: multiply current n with accumulator and call factorial with n-1
    else {
        return factorial(n - 1, acc * n);
    }
}

// Example usage
const n = 5; // Example input
const result = factorial(n);
console.log(`Factorial of ${n} is ${result}`);
