def last_occurrence(arr, target):
    left = 0
    right = len(arr) - 1
    result = -1
    
    while left <= right:
        mid = left + (right - left) // 2
        
        if arr[mid] == target:
            result = mid
            left = mid + 1  # Move to the right subarray to find the last occurrence
        elif arr[mid] < target:
            left = mid + 1
        else:
            right = mid - 1
    
    return result

# Example usage:
arr = [1, 2, 3, 3, 3, 4, 5, 6]
target = 3
print("Index of last occurrence:", last_occurrence(arr, target))
