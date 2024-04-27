#include <stdio.h>
#include <ctype.h> // For isalnum function
#include <stdbool.h> // For boolean data type

// Function to check if a character is alphanumeric
bool isAlphanumeric(char ch) {
    return isalnum(ch) != 0; // Returns true if the character is alphanumeric
}

// Function to check if a string is a palindrome
bool isPalindrome(char *str) {
    // Initialize start and end pointers
    int start = 0;
    int end = 0;
    // Get the length of the string
    while (str[end] != '\0') {
        end++;
    }
    end--; // Decrement end to point to the last character
    
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
        if (tolower(str[start]) != tolower(str[end])) { // Convert characters to lowercase for case-insensitive comparison
            return false; // If characters are not equal, return false
        }
        
        // Move pointers
        start++;
        end--;
    }
    
    // If the loop completes, the string is a palindrome
    return true;
}

// Test the function
int main() {
    // Test cases
    printf("%d\n", isPalindrome("A man, a plan, a canal, Panama")); // Output: 1 (true)
    printf("%d\n", isPalindrome("race a car")); // Output: 0 (false)
    
    return 0;
}
