#include <stdio.h>
#include <stdlib.h>

#define MIN_RUN 32

void insertionSort(int arr[], int left, int right) {
    for (int i = left + 1; i <= right; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= left && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void merge(int arr[], int left, int mid, int right) {
    int leftLen = mid - left + 1;
    int rightLen = right - mid;
    int *leftArr = (int *)malloc(leftLen * sizeof(int));
    int *rightArr = (int *)malloc(rightLen * sizeof(int));

    for (int i = 0; i < leftLen; i++) {
        leftArr[i] = arr[left + i];
    }
    for (int i = 0; i < rightLen; i++) {
        rightArr[i] = arr[mid + 1 + i];
    }

    int i = 0, j = 0, k = left;
    while (i < leftLen && j < rightLen) {
        if (leftArr[i] <= rightArr[j]) {
            arr[k++] = leftArr[i++];
        } else {
            arr[k++] = rightArr[j++];
        }
    }
    while (i < leftLen) {
        arr[k++] = leftArr[i++];
    }
    while (j < rightLen) {
        arr[k++] = rightArr[j++];
    }

    free(leftArr);
    free(rightArr);
}

void timSort(int arr[], int n) {
    for (int i = 0; i < n; i += MIN_RUN) {
        insertionSort(arr, i, fmin(i + MIN_RUN - 1, n - 1));
    }

    for (int size = MIN_RUN; size < n; size *= 2) {
        for (int left = 0; left < n; left += 2 * size) {
            int mid = left + size - 1;
            int right = fmin(left + 2 * size - 1, n - 1);
            if (mid < right) {
                merge(arr, left, mid, right);
            }
        }
    }
}

int main() {
    int arr[] = {5, 21, 7, 23, 19};
    int n = sizeof(arr) / sizeof(arr[0]);

    timSort(arr, n);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
