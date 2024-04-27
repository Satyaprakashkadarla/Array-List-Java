// Function to check if a character is alphanumeric
function isAlphanumeric(ch) {
    return /[a-zA-Z0-9]/.test(ch); // Returns true if the character is alphanumeric
}

// Function to check if a string is a palindrome
function isPalindrome(str) {
    // Convert the string to lowercase to ignore case
    str = str.toLowerCase();
    // Initialize start and end pointers
    let start = 0;
    let end = str.length - 1;

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
        if (str[start] !== str[end]) {
            return false; // If characters are not equal, return false
        }

        // Move pointers
        start++;
        end--;
    }

    // If the loop completes, the string is a palindrome
    return true;
}

// Test cases
console.log(isPalindrome("A man, a plan, a canal, Panama")); // Output: true
console.log(isPalindrome("race a car")); // Output: false
