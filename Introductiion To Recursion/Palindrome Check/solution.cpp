#include <iostream>
#include <cctype> // For isalnum function
#include <string>

using namespace std;

// Function to check if a character is alphanumeric
bool isAlphanumeric(char ch) {
    return isalnum(ch) != 0; // Returns true if the character is alphanumeric
}

// Function to check if a string is a palindrome
bool isPalindrome(string str) {
    // Convert the string to lowercase to ignore case
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    // Initialize start and end pointers
    int start = 0;
    int end = str.length() - 1;

    // Loop until start is less than end
    while (start < end) {
        // Ignore non-alphanumeric characters by skipping them
        while (!isAlphanumeric(str[start]) && start < end) {
            start++;
        }
        while (!isAlphanumeric(str[end]) && start < end) {
            end--;
        }

        // Compare characters at start and end
        if (str[start] != str[end]) {
            return false; // If characters are not equal, return false
        }

        // Move pointers
        start++;
        end--;
    }

    // If the loop completes, the string is a palindrome
    return true;
}

// Main function to test the isPalindrome function
int main() {
    // Test cases
    cout << boolalpha; // Output true/false instead of 1/0
    cout << isPalindrome("A man, a plan, a canal, Panama") << endl; // Output: true
    cout << isPalindrome("race a car") << endl; // Output: false

    return 0;
}
