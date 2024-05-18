def binary_search_first(arr, x):
    low, high = 0, len(arr) - 1
    result = -1
    while low <= high:
        mid = (low + high) // 2
        if arr[mid] == x:
            result = mid
            high = mid - 1  # Look on the left side
        elif arr[mid] < x:
            low = mid + 1
        else:
            high = mid - 1
    return result

arr = [2, 4, 10, 10, 10, 18, 20]
x = 10
index = binary_search_first(arr, x)
if index != -1:
    print(f"First occurrence of {x} is at index {index}")
else:
    print("Element not found")
