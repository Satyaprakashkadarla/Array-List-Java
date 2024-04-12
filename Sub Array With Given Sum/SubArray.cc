#include <iostream>
#include <vector>

using namespace std;

void findSubarrayWithGivenSum(const vector<int>& array, int givenSum) {
    int start = 0; // Initialize start pointer
    int end = 0;   // Initialize end pointer
    int currentSum = array[0]; // Initialize currentSum with first element

    while (end < array.size()) {
        if (currentSum == givenSum) { // If currentSum equals givenSum, subarray found
            cout << "Subarray found from index " << start << " to " << end << endl;
            return;
        } else if (currentSum < givenSum) { // If currentSum is less than givenSum, move end pointer forward
            end++;
            if (end < array.size()) // Avoid accessing out of bounds
                currentSum += array[end];
        } else { // If currentSum is greater than givenSum, move start pointer forward
            currentSum -= array[start];
            start++;
        }
    }
    cout << "Subarray not found" << endl; // If no subarray found
}

int main() {
    vector<int> array = {1, 4, 20, 3, 10, 5};
    int givenSum = 33;

    findSubarrayWithGivenSum(array, givenSum);

    return 0;
}
