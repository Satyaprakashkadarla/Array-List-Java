#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>

// Custom comparison function to compare numbers by their square roots
bool compareBySqrt(int a, int b) {
    double sqrt_a = sqrt(a);
    double sqrt_b = sqrt(b);

    return sqrt_a < sqrt_b;
}

int main() {
    std::vector<int> arr = {16, 25, 9, 4, 36};

    // Sorting the array by square roots
    std::sort(arr.begin(), arr.end(), compareBySqrt);

    // Printing the sorted array
    std::cout << "Sorted array: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    return 0;
}
