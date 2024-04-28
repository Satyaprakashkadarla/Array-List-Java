#include <stdio.h>
#include <stdlib.h>

// Function to compare two integers for sorting in descending order
int compare(const void *a, const void *b) {
    return (*(int *)b - *(int *)a);
}

// Function to implement the greedy rope cutting algorithm
int greedyRopeCut(int ropeLength, int desiredLengths[], int numDesired) {
    // Sort the desired lengths in descending order
    qsort(desiredLengths, numDesired, sizeof(int), compare);

    int cuts = 0;
    int remainingLength = ropeLength;

    // Iterate through desired lengths
    for (int i = 0; i < numDesired; i++) {
        // Check if remaining length is greater than or equal to desired length
        while (remainingLength >= desiredLengths[i]) {
            // Cut the rope at the desired length
            remainingLength -= desiredLengths[i];
            // Increment cuts counter
            cuts++;
        }
    }

    // Return the total number of cuts
    return cuts;
}

int main() {
    int ropeLength = 10;
    int desiredLengths[] = {3, 5, 7};
    int numDesired = sizeof(desiredLengths) / sizeof(desiredLengths[0]);

    int minCuts = greedyRopeCut(ropeLength, desiredLengths, numDesired);
    printf("Minimum cuts using greedy algorithm: %d\n", minCuts);

    return 0;
}
