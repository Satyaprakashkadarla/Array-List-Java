# Binary search function
def binary_search(target, arr, start, end):
    while start <= end:
        mid = (start + end) // 2
        if arr[mid] == target:
            return mid
        elif arr[mid] < target:
            start = mid + 1
        else:
            end = mid - 1
    return -1

# Function to search in infinite-sized array
def infinite_array_search(target, arr):
    start = 0
    end = 1
    # Doubling the range until the target is within the range
    while arr[end] < target:
        start = end
        end *= 2
    # Perform binary search within the found range
    return binary_search(target, arr, start, end)

arr = [0, 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21] # Example array
target = 13 # Example target
index = infinite_array_search(target, arr)
if index != -1:
    print("Target found at index:", index)
else:
    print("Target not found in the array.")
