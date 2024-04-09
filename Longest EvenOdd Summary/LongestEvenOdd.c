#include <stdio.h>

int longestEvenOdd(int arr[], int n) {
    // Initialize variables to keep track of maximum and current lengths
    int maxLength = 1; // Initialize maxLength to 1 since any single element is a valid subarray
    int currentLength = 1; // Initialize currentLength to 1 since the first element is considered as a subarray

    // Iterate through the array starting from the second element
    for (int i = 1; i < n; i++) {
        // Check if the current element and the previous element have different parities
        if ((arr[i] % 2 == 0 && arr[i - 1] % 2 != 0) || (arr[i] % 2 != 0 && arr[i - 1] % 2 == 0)) {
            // If the condition is true, increment currentLength
            currentLength++;
            // Update maxLength if currentLength is greater
            if (currentLength > maxLength)
                maxLength = currentLength;
        } else {
            // If the condition is false, reset currentLength to 1
            currentLength = 1;
        }
    }

    // Return the maximum length found
    return maxLength;
}

int main() {
    int arr[] = {10, 12, 14, 7, 8, 9, 13, 12, 15, 16};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Call the function to find the length of the longest even-odd subarray
    int longestLength = longestEvenOdd(arr, n);

    // Print the result
    printf("Length of the longest even-odd subarray: %d\n", longestLength);

    return 0;
}
