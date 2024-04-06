#include <stdio.h>

// Function to move zeros to the end of an array
void moveZerosToEnd(int arr[], int size) {
    int left = 0, right = 0;

    // Traverse through the array with two pointers
    while (right < size) {
        // If the current element is non-zero, swap it with the left pointer
        if (arr[right] != 0) {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
        }
        // Move the right pointer forward
        right++;
    }
}

int main() {
    // Example array
    int arr[] = {0, 1, 0, 3, 12};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Move zeros to the end
    moveZerosToEnd(arr, size);

    // Print the result
    printf("Result: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
