package main

import (
    "fmt"
    "unicode"
)

// Function to check if a character is alphanumeric
func isAlphanumeric(ch rune) bool {
    return unicode.IsLetter(ch) || unicode.IsDigit(ch)
}

// Function to check if a string is a palindrome
func isPalindrome(s string) bool {
    // Convert the string to lowercase to ignore case
    s = strings.ToLower(s)
    // Initialize start and end pointers
    start := 0
    end := len(s) - 1

    // Loop until start is less than end
    for start < end {
        // Ignore non-alphanumeric characters by skipping them
        for start < end && !isAlphanumeric(rune(s[start])) {
            start++
        }
        for start < end && !isAlphanumeric(rune(s[end])) {
            end--
        }

        // Compare characters at start and end
        if s[start] != s[end] {
            return false // If characters are not equal, return false
        }

        // Move pointers
        start++
        end--
    }

    // If the loop completes, the string is a palindrome
    return true
}

func main() {
    // Test cases
    fmt.Println(isPalindrome("A man, a plan, a canal, Panama")) // Output: true
    fmt.Println(isPalindrome("race a car"))                      // Output: false
}
