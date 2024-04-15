#include <stdio.h>

int main() {
    // Define a decimal number
    int number = 10; // Binary representation of 10 is 1010 in 4 bits

    // Perform right shift operation by 2 positions
    int result_right_shift = number >> 2;

    // Print the result
    printf("Right Shift result: %d\n", result_right_shift); // Output: 2

    return 0;
}
