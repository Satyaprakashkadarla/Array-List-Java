#include <stdio.h>

// Function to count occurrences of 1 in a sorted binary array
int countOnes(int arr[], int n) {
    int count = 0;
    int left = 0;
    int right = n - 1;

    // Binary search loop
    while (left <= right) {
        int mid = (left + right) / 2;
        // If arr[mid] is 1, increment count and search on the right side
        if (arr[mid] == 1) {
            count += (right - mid) + 1;
            left = mid + 1;
        } else {
            // If arr[mid] is 0, search on the left side
            right = mid - 1;
        }
    }
    return count;
}

int main() {
    int arr[] = {0, 0, 0, 1, 1, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int onesCount = countOnes(arr, n);
    printf("Number of ones: %d\n", onesCount);
    return 0;
}