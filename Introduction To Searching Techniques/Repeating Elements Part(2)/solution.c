#include <stdio.h>

int binary_search_first(int arr[], int n, int x) {
    int low = 0, high = n - 1;
    int result = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == x) {
            result = mid;
            high = mid - 1; // Look on the left side
        } else if (arr[mid] < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return result;
}

int main() {
    int arr[] = {2, 4, 10, 10, 10, 18, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 10;
    int index = binary_search_first(arr, n, x);
    if (index != -1) {
        printf("First occurrence of %d is at index %d\n", x, index);
    } else {
        printf("Element not found\n");
    }
    return 0;
}
