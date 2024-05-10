# Function to count occurrences of target in a sorted array
def count_occurrence(arr, target):
    count = 0
    left = 0
    right = len(arr) - 1

    # Binary search loop
    while left <= right:
        mid = (left + right) // 2
        # If target is found
        if arr[mid] == target:
            count += 1  # Increment count
            # Check for more occurrences on the left side
            i = mid - 1
            while i >= left and arr[i] == target:
                count += 1
                i -= 1
            # Check for more occurrences on the right side
            j = mid + 1
            while j <= right and arr[j] == target:
                count += 1
                j += 1
            return count
        # If target is greater, search right half
        elif arr[mid] < target:
            left = mid + 1
        # If target is smaller, search left half
        else:
            right = mid - 1
    # Target not found
    return 0

arr = [1, 2, 2, 2, 3, 3, 4, 5, 5]
target = 2
occurrences = count_occurrence(arr, target)
print("Occurrences of {}: {}".format(target, occurrences))