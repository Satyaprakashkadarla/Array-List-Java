#include <iostream>

// Function to calculate factorial using tail recursion
int factorial(int n, int acc = 1) {
    // Base case: if n is 0, return the accumulator
    if (n == 0) {
        return acc;
    } 
    // Recursive case: multiply current n with accumulator and call factorial with n-1
    else {
        return factorial(n - 1, acc * n);
    }
}

int main() {
    int n = 5; // Example input
    int result = factorial(n);
    std::cout << "Factorial of " << n << " is " << result << std::endl;
    return 0;
}
