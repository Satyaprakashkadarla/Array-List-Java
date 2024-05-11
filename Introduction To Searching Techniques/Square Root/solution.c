#include <stdio.h>
#include <math.h>

// Custom comparison function to compare numbers by their square roots
int compareBySqrt(const void *a, const void *b) {
    double sqrt_a = sqrt(*(const int*)a);
    double sqrt_b = sqrt(*(const int*)b);

    if (sqrt_a < sqrt_b)
        return -1;
    else if (sqrt_a > sqrt_b)
        return 1;
    else
        return 0;
}

int main() {
    int arr[] = {16, 25, 9, 4, 36};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Sorting the array by square roots
    qsort(arr, n, sizeof(int), compareBySqrt);

    // Printing the sorted array
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
