public class PalindromeChecker {
    // Function to check if a character is alphanumeric
    public static boolean isAlphanumeric(char ch) {
        return Character.isLetterOrDigit(ch); // Returns true if the character is alphanumeric
    }

    // Function to check if a string is a palindrome
    public static boolean isPalindrome(String str) {
        // Convert the string to lowercase to ignore case
        str = str.toLowerCase();
        // Initialize start and end pointers
        int start = 0;
        int end = str.length() - 1;

        // Loop until start is less than end
        while (start < end) {
            // Ignore non-alphanumeric characters by skipping them
            while (!isAlphanumeric(str.charAt(start)) && start < end) {
                start++;
            }
            while (!isAlphanumeric(str.charAt(end)) && start < end) {
                end--;
            }

            // Compare characters at start and end
            if (str.charAt(start) != str.charAt(end)) {
                return false; // If characters are not equal, return false
            }

            // Move pointers
            start++;
            end--;
        }

        // If the loop completes, the string is a palindrome
        return true;
    }

    // Main method to test the function
    public static void main(String[] args) {
        // Test cases
        System.out.println(isPalindrome("A man, a plan, a canal, Panama")); // Output: true
        System.out.println(isPalindrome("race a car")); // Output: false
    }
}
