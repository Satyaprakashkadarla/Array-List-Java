#include <stdio.h>

// Function to generate Gray Code
void generateGrayCode(int n) {
    int gray[1 << n]; // Gray code array
    gray[0] = 0; // Start with 0 as the first element
    
    // Loop from 1 to 2^n - 1
    for (int i = 1; i < (1 << n); i++) {
        gray[i] = i ^ (i >> 1); // Generate Gray Code using XOR
    }
    
    // Print the Gray Code
    printf("Gray Code for %d bits:\n", n);
    for (int i = 0; i < (1 << n); i++) {
        printf("%d ", gray[i]);
    }
}

// Main function
int main() {
    int n = 3; // Number of bits
    generateGrayCode(n);
    return 0;
}
