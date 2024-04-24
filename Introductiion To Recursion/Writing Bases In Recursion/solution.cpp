#include <iostream>

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
    std::cout << "Enter a non-negative integer: ";
    std::cin >> n;
    // Check if the input is non-negative
    if (n < 0) {
        std::cout << "Invalid input! Please enter a non-negative integer." << std::endl;
    } else {
        int result = factorial(n);
        std::cout << "Factorial of " << n << " is " << result << std::endl;
    }
    return 0;
}
