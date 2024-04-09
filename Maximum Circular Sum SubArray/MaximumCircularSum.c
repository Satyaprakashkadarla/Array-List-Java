#include <stdio.h>

int max_subarray_sum(int arr[], int n) {
    int max_sum = arr[0];
    int current_sum = arr[0];

    for (int i = 1; i < n; i++) {
        current_sum = (arr[i] > current_sum + arr[i]) ? arr[i] : current_sum + arr[i];
        max_sum = (max_sum > current_sum) ? max_sum : current_sum;
    }

    return max_sum;
}

int min_subarray_sum(int arr[], int n) {
    int max_negative_sum = -max_subarray_sum(arr, n);
    return max_negative_sum;
}

int max_circular_sum(int arr[], int n) {
    int max_sum = max_subarray_sum(arr, n);
    int min_sum = min_subarray_sum(arr, n);
    int total_sum = 0;

    for (int i = 0; i < n; i++) {
        total_sum += arr[i];
    }

    int circular_max = (max_sum > (total_sum - min_sum)) ? max_sum : (total_sum - min_sum);
    return circular_max;
}

int main() {
    int arr[] = {8, -1, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Maximum circular sum: %d\n", max_circular_sum(arr, n));

    return 0;
}
