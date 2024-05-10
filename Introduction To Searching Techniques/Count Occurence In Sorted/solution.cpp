#include <iostream>
#include <vector>

using namespace std;

// Function to count occurrences of target in a sorted array
int countOccurrence(vector<int>& arr, int target) {
    int count = 0;
    int left = 0;
    int right = arr.size() - 1;
    
    // Binary search loop
    while (left <= right) {
        int mid = (left + right) / 2;
        // If target is found
        if (arr[mid] == target) {
            count++; // Increment count
            // Check for more occurrences on the left side
            int i = mid - 1;
            while (i >= left && arr[i] == target) {
                count++;
                i--;
            }
            // Check for more occurrences on the right side
            int j = mid + 1;
            while (j <= right && arr[j] == target) {
                count++;
                j++;
            }
            return count;
        } 
        // If target is greater, search right half
        else if (arr[mid] < target) {
            left = mid + 1;
        } 
        // If target is smaller, search left half
        else {
            right = mid - 1;
        }
    }
    // Target not found
    return 0;
}

int main() {
    vector<int> arr = {1, 2, 2, 2, 3, 3, 4, 5, 5};
    int target = 2;
    int occurrences = countOccurrence(arr, target);
    cout << "Occurrences of " << target << ": " << occurrences << endl;
    return 0;
}
