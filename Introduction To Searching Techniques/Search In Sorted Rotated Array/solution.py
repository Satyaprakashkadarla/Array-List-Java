def searchRotatedArray(arr, target):
    left, right = 0, len(arr) - 1

    # Find the pivot point
    while left < right:
        mid = (left + right) // 2
        if arr[mid] > arr[right]:
            left = mid + 1
        else:
            right = mid

    pivot = left

    # Set the search boundaries based on the pivot
    left, right = 0, len(arr) - 1
    if target >= arr[pivot] and target <= arr[right]:
        left = pivot
    else:
        right = pivot - 1

    # Perform binary search
    while left <= right:
        mid = (left + right) // 2
        if arr[mid] == target:
            return mid
        elif arr[mid] < target:
            left = mid + 1
        else:
            right = mid - 1

    return -1  # Target not found

# Example usage
arr = [4, 5, 6, 7, 0, 1, 2]
target = 0
index = searchRotatedArray(arr, target)
if index != -1:
    print("Element found at index", index)
else:
    print("Element not found")
