#include <stdio.h>
#include <stdlib.h>

int* findLeaders(int arr[], int n) {
    int* leaders = (int*)malloc(n * sizeof(int));
    int maxRight = arr[n - 1];
    int count = 0;

    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > maxRight) {
            maxRight = arr[i];
            leaders[count++] = maxRight;
        }
    }

    int* result = (int*)malloc(count * sizeof(int));
    for (int i = 0; i < count; i++) {
        result[i] = leaders[count - i - 1];
    }

    free(leaders);
    return result;
}

int main() {
    int arr[] = {16, 17, 4, 3, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int* leaders = findLeaders(arr, n);

    printf("Leaders in the array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", leaders[i]);
    }
    printf("\n");

    free(leaders);
    return 0;
}
