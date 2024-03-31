#include <stdio.h>

void leftRotateByOne(int arr[], int n) {
    int temp = arr[0];  // Store the first element in a temporary variable

    // Shift all elements one position to the left
    for (int i = 1; i < n; i++) {
        arr[i - 1] = arr[i];
    }

    // Place the temporary variable at the end
    arr[n - 1] = temp;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Print original array
    printf("Original Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Left rotate the array by one position
    leftRotateByOne(arr, n);

    // Print array after left rotation
    printf("\nArray after left rotation by one position: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
