def left_rotate_by_one(arr):
    temp = arr[0]  # Store the first element in a temporary variable

    # Shift all elements one position to the left
    for i in range(1, len(arr)):
        arr[i - 1] = arr[i]

    # Place the temporary variable at the end
    arr[-1] = temp

# Example usage:
arr1 = [1, 2, 3, 4, 5]
left_rotate_by_one(arr1)
print("Array after left rotation by one position:", arr1)

arr2 = [5, 4, 3, 2, 1]
left_rotate_by_one(arr2)
print("Array after left rotation by one position:", arr2)

arr3 = ['a', 'b', 'c', 'd', 'e']
left_rotate_by_one(arr3)
print("Array after left rotation by one position:", arr3)
