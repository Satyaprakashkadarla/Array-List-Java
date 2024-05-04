#include <iostream>
#include <vector>

using namespace std;

// Function to generate Gray Code
void generateGrayCode(int n) {
    vector<int> gray(1 << n); // Gray code vector
    gray[0] = 0; // Start with 0 as the first element
    
    // Loop from 1 to 2^n - 1
    for (int i = 1; i < (1 << n); i++) {
        gray[i] = i ^ (i >> 1); // Generate Gray Code using XOR
    }
    
    // Print the Gray Code
    cout << "Gray Code for " << n << " bits:" << endl;
    for (int i = 0; i < (1 << n); i++) {
        cout << gray[i] << " ";
    }
}

// Main function
int main() {
    int n = 3; // Number of bits
    generateGrayCode(n);
    return 0;
}
