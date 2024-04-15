#include <stdio.h>

int main() {
    // Define a decimal number
    int number = 10; // Binary representation of 10 is 1010 in 4 bits

    // Perform left shift operation by 2 positions
    int result_left_shift = number << 2;

    // Print the result
    printf("Left Shift result: %d\n", result_left_shift); // Output: 40

    return 0;
}
