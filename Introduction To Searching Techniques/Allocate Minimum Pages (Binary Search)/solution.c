#include <stdio.h>

int isPossible(int arr[], int n, int m, int max_pages) {
    int student_count = 1;
    int current_sum = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > max_pages)
            return 0;

        if (current_sum + arr[i] > max_pages) {
            student_count++;
            current_sum = arr[i];

            if (student_count > m)
                return 0;
        } else {
            current_sum += arr[i];
        }
    }
    return 1;
}

int findPages(int arr[], int n, int m) {
    if (m > n)
        return -1;

    int low = arr[0], high = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > low)
            low = arr[i];
        high += arr[i];
    }

    int result = high;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (isPossible(arr, n, m, mid)) {
            result = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return result;
}

int main() {
    int arr[] = {12, 34, 67, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    int m = 2;
    printf("Minimum number of pages = %d\n", findPages(arr, n, m));
    return 0;
}
