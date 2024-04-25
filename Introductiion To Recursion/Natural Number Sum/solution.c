#include <stdio.h>

int sumOfNaturalNumbers(int n) {
    if (n <= 0) {
        return 0; // Base case: if n is less than or equal to 0, return 0
    } else {
        return n + sumOfNaturalNumbers(n - 1); // Recursively call the function with n-1 and add n to the result
    }
}

int main() {
    int n = 5;
    printf("Sum of natural numbers up to %d is: %d\n", n, sumOfNaturalNumbers(n));
    return 0;
}
