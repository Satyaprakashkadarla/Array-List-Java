#include <iostream>

// Function to calculate the sum of natural numbers recursively
int sum_of_natural_numbers(int n) {
    // Base case: if n is 1 or less, return n
    if (n <= 1) {
        return n;
    } else {
        // Recursive case: add n to the sum of natural numbers from 1 to n-1
        return n + sum_of_natural_numbers(n - 1);
    }
}

int main() {
    int number = 5; // Example input
    int result = sum_of_natural_numbers(number); // Call the function to get the sum
    // Print the result
    std::cout << "The sum of natural numbers up to " << number << " is: " << result << std::endl;
    return 0;
}
