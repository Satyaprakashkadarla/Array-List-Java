def insertion_sort_partially_sorted(arr, sorted_upto):
    for i in range(sorted_upto, len(arr)):
        key = arr[i]
        j = i - 1
        while j >= 0 and key < arr[j]:
            arr[j + 1] = arr[j]
            j -= 1
        arr[j + 1] = key
    return arr

# Example usage:
arr = [1, 2, 3, 7, 8, 9, 4, 5, 6]
sorted_upto = 6  # First 6 elements are sorted
sorted_arr = insertion_sort_partially_sorted(arr, sorted_upto)
print("Sorted array:", sorted_arr)
