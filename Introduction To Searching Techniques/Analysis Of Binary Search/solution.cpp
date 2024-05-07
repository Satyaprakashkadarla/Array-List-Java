#include <iostream>
using namespace std;

// Function to perform binary search
int binary_search(int arr[], int target, int size) {
    int low = 0;
    int high = size - 1;
    
    while (low <= high) {
        int mid = (low + high) / 2;
        
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    
    return -1; // Target not found
}

// Main function
int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15, 17};
    int target = 11;
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = binary_search(arr, target, size);
    if (result != -1)
        cout << "Element found at index " << result << "." << endl;
    else
        cout << "Element not found." << endl;
    return 0;
}
