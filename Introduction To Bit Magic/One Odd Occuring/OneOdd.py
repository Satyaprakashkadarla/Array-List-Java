def find_single_element(nums):
    # Initialize result to 0
    result = 0
    
    # Iterate through each number in the array
    for num in nums:
        # XOR the current number with the result
        # This effectively cancels out paired elements
        # leaving the single element
        result ^= num
    
    # Return the single element
    return result

# Example usage:
arr = [4, 3, 6, 2, 2, 3, 4]
print(find_single_element(arr))  # Output: 6
