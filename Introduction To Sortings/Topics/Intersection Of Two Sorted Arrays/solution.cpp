#include <iostream>
using namespace std;

// Function to find intersection of two sorted arrays
void intersection(int array1[], int array2[], int m, int n, int result[]) {
    int i = 0, j = 0, k = 0;

    // Iterate until one pointer reaches the end of its array
    while (i < m && j < n) {
        // Compare elements at current pointers
        if (array1[i] < array2[j]) {
            // If element in array1 is less, move to next element in array1
            i++;
        } else if (array1[i] > array2[j]) {
            // If element in array2 is less, move to next element in array2
            j++;
        } else {
            // If elements are equal, add to result and move to next in both
            result[k++] = array1[i++];
            j++;
        }
    }

    // Print result
    for (int l = 0; l < k; l++) {
        cout << result[l] << " ";
    }
}