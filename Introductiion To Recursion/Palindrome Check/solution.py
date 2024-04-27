def is_palindrome(s):
    # Convert the string to lowercase to ignore case
    s = s.lower()
    # Initialize start and end pointers
    start = 0
    end = len(s) - 1
    
    # Loop until start is less than end
    while start < end:
        # Ignore non-alphanumeric characters by skipping them
        while not s[start].isalnum() and start < end:
            start += 1
        while not s[end].isalnum() and start < end:
            end -= 1
        
        # Compare characters at start and end
        if s[start] != s[end]:
            return False
        
        # Move pointers
        start += 1
        end -= 1
    
    # If the loop completes, the string is a palindrome
    return True

# Test the function
print(is_palindrome("A man, a plan, a canal, Panama"))  # Output: True
print(is_palindrome("race a car"))  # Output: False
