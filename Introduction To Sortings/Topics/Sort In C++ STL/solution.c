#include <stdio.h>
#include <stdlib.h>

// Comparator function for qsort
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int numbers[] = {5, 2, 9, 1, 5, 6};
    int n = sizeof(numbers) / sizeof(numbers[0]);

    // Sort using qsort
    qsort(numbers, n, sizeof(int), compare);

    // Print sorted array
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
