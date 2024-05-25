#include <iostream>
#include <vector>
#include <algorithm> // For std::sort

int main() {
    std::vector<int> numbers = {5, 2, 9, 1, 5, 6};

    // Sort in ascending order
    std::sort(numbers.begin(), numbers.end());

    // Print sorted vector
    std::cout << "Sorted array: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
