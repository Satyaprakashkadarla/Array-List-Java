#include <stdio.h>

int is_kth_bit_set(int n, int k) {
    // Left shift 1 by k positions
    int mask = 1 << k;
    // Bitwise AND with n
    // If the result is non-zero, then the k-th bit is set
    return (n & mask) != 0;
}

int main() {
    int n = 5;  // Binary representation: 101
    int k = 2;  // Check if the 2nd bit (from right to left) is set
    if (is_kth_bit_set(n, k)) {
        printf("The %d-th bit is set.\n", k);
    } else {
        printf("The %d-th bit is not set.\n", k);
    }
    return 0;
}
