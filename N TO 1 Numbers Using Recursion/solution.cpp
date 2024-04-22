#include <iostream>

// Function to print numbers from n down to 1 recursively
void printNumbers(int n) {
    // Base case: if n is less than or equal to 0, return without printing
    if (n <= 0) {
        return;
    }
    
    // Print the current value of n
    std::cout << n << std::endl;
    
    // Recursive call: printNumbers with n-1 as argument
    printNumbers(n - 1);
}

int main() {
    int n = 5; // Example: start from 5
    std::cout << "Printing numbers from " << n << " down to 1:" << std::endl;
    printNumbers(n);
    
    return 0;
}
