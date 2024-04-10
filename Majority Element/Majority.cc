#include <stdio.h>

// Function to find the minimum number of consecutive flips needed
int minConsecutiveFlips(int array[], int n) {
    int flipCount = 0;  // Initialize the flip count to 0
    int current = array[0];  // Initialize the current element to the first element of the array

    // Traverse through the array
    for (int i = 1; i < n; i++) {
        // If the current element is different from the previous one
        if (array[i] != current) {
            flipCount++;  // Increment flip count as a flip is needed
            current = array[i];  // Update the current element
        }
    }

    return flipCount;  // Return the total flip count
}

int main() {
    int array[] = {1, 0, 0, 1, 0, 1, 1, 0};
    int n = sizeof(array) / sizeof(array[0]);

    // Find the minimum consecutive flips
    int result = minConsecutiveFlips(array, n);

    printf("Minimum consecutive flips needed: %d\n", result);

    return 0;
}
