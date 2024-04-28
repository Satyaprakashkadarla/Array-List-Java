#include <stdio.h>
#include <stdlib.h>

// Function to implement the dynamic programming rope cutting algorithm
int dynamicRopeCut(int ropeLength, int desiredLengths[], int numDesired) {
    // Initialize an array to store minimum cuts for each length
    int minCuts[ropeLength + 1];
    minCuts[0] = 0;

    // Iterate through rope lengths
    for (int i = 1; i <= ropeLength; i++) {
        // Initialize minimum cuts to infinity
        minCuts[i] = INT_MAX;

        // Iterate through desired lengths
        for (int j = 0; j < numDesired; j++) {
            // Check if the current length can be cut from the rope
            if (i >= desiredLengths[j]) {
                // Update the minimum cuts for the current length
                if (minCuts[i - desiredLengths[j]] != INT_MAX && minCuts[i - desiredLengths[j]] + 1 < minCuts[i]) {
                    minCuts[i] = minCuts[i - desiredLengths[j]] + 1;
                }
            }
        }
    }

    // Return the minimum cuts needed for the entire rope length
    return minCuts[ropeLength];
}

int main() {
    int ropeLength = 10;
    int desiredLengths[] = {3, 5, 7};
    int numDesired = sizeof(desiredLengths) / sizeof(desiredLengths[0]);

    int minCuts = dynamicRopeCut(ropeLength, desiredLengths, numDesired);
    printf("Minimum cuts using dynamic programming: %d\n", minCuts);

    return 0;
}
