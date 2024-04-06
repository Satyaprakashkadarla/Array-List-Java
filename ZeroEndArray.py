def moveZerosToEnd(arr):
    left = 0
    right = 0
    size = len(arr)

    # Traverse through the array with two pointers
    while right < size:
        # If the current element is non-zero, swap it with the left pointer
        if arr[right] != 0:
            arr[left], arr[right] = arr[right], arr[left]
            left += 1
        # Move the right pointer forward
        right += 1

# Example usage:
arr = [0, 1, 0, 3, 12]
moveZerosToEnd(arr)
print("Result:", arr)
