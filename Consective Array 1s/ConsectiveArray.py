def findMaxConsecutiveOnes(nums):
    maxCount = 0  # Initialize variable to store maximum consecutive 1s
    currentCount = 0  # Initialize variable to store current consecutive 1s
    
    # Iterate through the array
    for num in nums:
        if num == 1:  # If the current element is 1
            currentCount += 1  # Increment the count of consecutive 1s
        else:  # If the current element is not 1 (i.e., it's 0)
            maxCount = max(maxCount, currentCount)  # Update maxCount with the maximum consecutive 1s encountered so far
            currentCount = 0  # Reset currentCount to 0 for the next potential consecutive sequence
    
    # Check for the maximum consecutive 1s encountered at the end of the array
    return max(maxCount, currentCount)

# Example usage
nums = [1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1]
print("Maximum consecutive 1s:", findMaxConsecutiveOnes(nums))  # Output: 4
