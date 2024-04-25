function sumOfNaturalNumbers(n) {
    if (n <= 0) {
        return 0; // Base case: if n is less than or equal to 0, return 0
    } else {
        return n + sumOfNaturalNumbers(n - 1); // Recursively call the function with n-1 and add n to the result
    }
}

// Example usage:
const n = 5;
console.log(`Sum of natural numbers up to ${n} is: ${sumOfNaturalNumbers(n)}`);
