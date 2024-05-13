def findPeakElement(nums):
    left = 0
    right = len(nums) - 1

    while left <= right:
        mid = left + (right - left) // 2

        # Check if mid is a peak
        if (mid == 0 or nums[mid] >= nums[mid - 1]) and \
           (mid == len(nums) - 1 or nums[mid] >= nums[mid + 1]):
            return mid
        elif mid > 0 and nums[mid - 1] > nums[mid]:
            right = mid - 1 # If the left neighbor is greater, move right
        else:
            left = mid + 1 # Otherwise, move left

    return -1 # No peak found

# Example usage:
nums = [1, 2, 3, 1]
peakIndex = findPeakElement(nums)
print("Peak element index:", peakIndex) # Output: 2 (index of 3)
