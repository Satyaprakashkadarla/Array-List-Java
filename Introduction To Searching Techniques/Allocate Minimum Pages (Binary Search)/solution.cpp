#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

bool isPossible(std::vector<int>& arr, int n, int m, int max_pages) {
    int student_count = 1;
    int current_sum = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > max_pages)
            return false;

        if (current_sum + arr[i] > max_pages) {
            student_count++;
            current_sum = arr[i];

            if (student_count > m)
                return false;
        } else {
            current_sum += arr[i];
        }
    }
    return true;
}

int findPages(std::vector<int>& arr, int n, int m) {
    if (m > n)
        return -1;

    int low = *max_element(arr.begin(), arr.end());
    int high = accumulate(arr.begin(), arr.end(), 0);
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
    std::vector<int> arr = {12, 34, 67, 90};
    int n = arr.size();
    int m = 2;
    std::cout << "Minimum number of pages = " << findPages(arr, n, m) << std::endl;
    return 0;
}
