#include <stdio.h>
#include <stdbool.h>

// Function to find the repeating element in an array
int findRepeatingElement(int arr[], int n) {
    // Create an empty hash table
    bool hashTable[n] = {false};

    // Iterate through the array
    for (int i = 0; i < n; i++) {
        // If the element is already in the hash table, return it
        if (hashTable[arr[i]]) {
            return arr[i];
        }
        // Otherwise, add it to the hash table
        else {
            hashTable[arr[i]] = true;
        }
    }

    // If no repeating element is found, return -1
    return -1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int repeatingElement = findRepeatingElement(arr, n);
    printf("The repeating element is: %d\n", repeatingElement);
    return 0;
}