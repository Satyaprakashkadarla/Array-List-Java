def two_sum(nums, target):
    left = 0
    right = len(nums) - 1
    
    while left < right:
        current_sum = nums[left] + nums[right]
        if current_sum == target:
            return [nums[left], nums[right]]  # Found the pair
        elif current_sum < target:
            left += 1  # Move left pointer to the right
        else:
            right -= 1  # Move right pointer to the left
    
    return []  # No pair found

# Example usage:
nums = [2, 7, 11, 15]
target = 9
print(two_sum(nums, target))  # Output: [2, 7]
