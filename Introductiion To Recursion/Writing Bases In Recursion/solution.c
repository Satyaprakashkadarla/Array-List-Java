#include <stdio.h>

// Function to calculate factorial recursively
int factorial(int n) {
    // Base case: if n is 0 or 1, return 1
    if (n == 0 || n == 1) {
        return 1;
    }
    // Recursive case: if n is greater than 1, calculate factorial recursively
    else {
        return n * factorial(n - 1);
    }
}

// Main function to test the factorial function
int main() {
    int n;
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);
    // Check if the input is non-negative
    if (n < 0) {
        printf("Invalid input! Please enter a non-negative integer.\n");
    } else {
        int result = factorial(n);
        printf("Factorial of %d is %d\n", n, result);
    }
    return 0;
}
