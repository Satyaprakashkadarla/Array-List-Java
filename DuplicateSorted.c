
//Certainly! Here are examples of removing duplicates from a sorted array in C:


#include <stdio.h>

int removeDuplicates(int sortedArray[], int length) {
    if (length == 0) {
        return 0; // Empty array case
    }

    // Initialize a variable to keep track of the next position to place a non-duplicate element
    int nextNonDuplicateIndex = 1;

    // Iterate through the array starting from the second element
    for (int i = 1; i < length; i++) {
        // If the current element is not equal to the previous element, it's a non-duplicate
        if (sortedArray[i] != sortedArray[nextNonDuplicateIndex - 1]) {
            // Place the non-duplicate element at the next position
            sortedArray[nextNonDuplicateIndex] = sortedArray[i];
            // Move to the next position for the next non-duplicate element
            nextNonDuplicateIndex++;
        }
    }

    return nextNonDuplicateIndex; // Return the length of the array without duplicates
}

int main() {
    int sortedArray[] = {1, 1, 2, 3, 3, 4, 5, 5, 5, 6};
    int length = sizeof(sortedArray) / sizeof(sortedArray[0]);
    int newLength = removeDuplicates(sortedArray, length);
    printf("Array with duplicates removed: ");
    for (int i = 0; i < newLength; i++) {
        printf("%d ", sortedArray[i]);
    }
    return 0;
}


