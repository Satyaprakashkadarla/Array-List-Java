#include <stdio.h>

void findFrequencies(int sortedArray[], int length) {
    if (sortedArray == NULL || length == 0) {
        return;
    }

    int currentElement = sortedArray[0];
    int currentCount = 1;

    // Iterate through the sorted array
    for (int i = 1; i < length; i++) {
        if (sortedArray[i] == currentElement) {
            currentCount++;
        } else {
            printf("%d: %d\n", currentElement, currentCount);
            currentElement = sortedArray[i];
            currentCount = 1;
        }
    }

    // Print or store the frequency of the last element
    printf("%d: %d\n", currentElement, currentCount);
}

int main() {
    int sortedArray[] = {1, 1, 2, 2, 2, 3, 3, 4, 5, 5, 5};
    int length = sizeof(sortedArray) / sizeof(sortedArray[0]);
    findFrequencies(sortedArray, length);
    return 0;
}
