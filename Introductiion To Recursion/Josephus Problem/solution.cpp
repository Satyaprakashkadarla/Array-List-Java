#include <iostream>
using namespace std;

int josephus(int n, int k) {
    if (n == 1) {                      // Base case: If there's only one person left
        return 0;                      // That person will be at position 0
    } else {
        // Recursive case: Calculate the position of the survivor in the current circle
        int previousSurvivorPosition = josephus(n - 1, k);   // Position of survivor in circle with n-1 people
        int nextSurvivorPosition = (previousSurvivorPosition + k) % n;  // Position of survivor in current circle
        return nextSurvivorPosition;
    }
}

int main() {
    int n = 7;      // number of people
    int k = 3;      // every 3rd person is eliminated
    int position = josephus(n, k);
    cout << "The last person remaining is at position: " << (position + 1) << endl;
    return 0;
}
