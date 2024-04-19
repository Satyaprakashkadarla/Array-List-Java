#include <stdio.h>

// Function to find the single element
int find_single_element(int nums[], int length) {
    // Initialize result to 0
    int result = 0;

    // Iterate through each number in the array
    for (int i = 0; i < length; i++) {
        // XOR the current number with the result
        // This effectively cancels out paired elements
        // leaving the single element
        result ^= nums[i];
    }

    // Return the single element
    return result;
}

int main() {
    // Example usage:
    int arr[] = {4, 3, 6, 2, 2, 3, 4};
    int length = sizeof(arr) / sizeof(arr[0]); // Calculate the length of the array
    printf("%d\n", find_single_element(arr, length));  // Output: 6

    return 0;
}
