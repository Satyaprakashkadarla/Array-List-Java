#include <iostream>
#include <vector>
using namespace std;

int binary_search_first(const vector<int>& arr, int x) {
    int low = 0, high = arr.size() - 1;
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
    vector<int> arr = {2, 4, 10, 10, 10, 18, 20};
    int x = 10;
    int index = binary_search_first(arr, x);
    if (index != -1) {
        cout << "First occurrence of " << x << " is at index " << index << endl;
    } else {
        cout << "Element not found" << endl;
    }
    return 0;
}
s