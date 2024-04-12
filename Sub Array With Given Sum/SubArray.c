#include <stdio.h>

void findSubarrayWithGivenSum(int array[], int size, int givenSum) {
    int start = 0; // Initialize start pointer
    int end = 0;   // Initialize end pointer
    int currentSum = array[0]; // Initialize currentSum with first element

    while (end < size) {
        if (currentSum == givenSum) { // If currentSum equals givenSum, subarray found
            printf("Subarray found from index %d to %d\n", start, end);
            return;
        } else if (currentSum < givenSum) { // If currentSum is less than givenSum, move end pointer forward
            end++;
            if (end < size) // Avoid accessing out of bounds
                currentSum += array[end];
        } else { // If currentSum is greater than givenSum, move start pointer forward
            currentSum -= array[start];
            start++;
        }
    }
    printf("Subarray not found\n"); // If no subarray found
}

int main() {
    int array[] = {1, 4, 20, 3, 10, 5};
    int size = sizeof(array) / sizeof(array[0]);
    int givenSum = 33;

    findSubarrayWithGivenSum(array, size, givenSum);

    return 0;
}
