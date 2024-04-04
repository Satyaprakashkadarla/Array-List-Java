#include <stdio.h>

int findSecondLargest(int arr[], int size) {
    int largest = arr[0];
    int secondLargest = arr[1];

    if (largest < secondLargest) {
        int temp = largest;
        largest = secondLargest;
        secondLargest = temp;
    }

    for (int i = 2; i < size; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    return secondLargest;
}

int main() {
    int arr[] = {10, 20, 15, 25, 30, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int secondLargest = findSecondLargest(arr, size);
    printf("Second largest element in the array is: %d\n", secondLargest);
    return 0;
}
