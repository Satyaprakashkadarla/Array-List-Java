#include <stdio.h>

int countSetBits(int n) {
    int count = 0;
    while (n != 0) {
        n = n & (n - 1); // Clears the rightmost set bit
        count++;
    }
    return count;
}

int main() {
    int n = 23; // Example input
    printf("Number of set bits: %d\n", countSetBits(n));
    return 0;
}
