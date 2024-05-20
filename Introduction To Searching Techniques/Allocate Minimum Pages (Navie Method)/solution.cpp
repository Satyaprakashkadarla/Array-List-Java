#include <bits/stdc++.h>
using namespace std;

int isPossible(int arr[], int n, int m, int mid) {
    int students = 1;
    int pages = 0;

    for (int i = 0; i < n; i++) {
        if (pages + arr[i] <= mid) {
            pages += arr[i];
        } else {
            students++;
            if (students > m || arr[i] > mid) {
                return 0;
            }
            pages = arr[i];
        }
    }

    return 1;
}

int findMinPages(int arr[], int n, int m) {
    int sum = 0;
    int max_page = INT_MIN;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
        max_page = (max_page > arr[i]) ? max_page : arr[i];
    }

    int mid, start = max_page, end = sum;

    while (start <= end) {
        mid = start + (end - start) / 2;

        if (isPossible(arr, n, m, mid)) {
            end = mid - 1;
            ans = mid;
        } else {
            start = mid + 1;
        }
    }

    return ans;
}

int main() {
    int arr[] = {12, 34, 67, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    int m = 2;

    cout << "Minimum number of pages = " << findMinPages(arr, n, m) << endl;

    return 0;
}