def merge(arr, left, middle, right):
    n1 = middle - left + 1
    n2 = right - middle
    L = [0] * n1
    R = [0] * n2
    i, j, k = 0, 0, left

    # Copy data to temp arrays L[] and R[]
    for i in range(n1):
        L[i] = arr[left + i]
    for j in range(n2):
        R[j] = arr[middle + 1 + j]

    # Merge the temp arrays back into arr[left..right]
    while i < n1 and j < n2:
        if L[i] <= R[j]:
            arr[k] = L[i]
            i += 1
        else:
            arr[k] = R[j]
            j += 1
        k += 1

    # Copy the remaining elements of L[], if there are any
    while i < n1:
        arr[k] = L[i]
        i += 1
        k += 1

    # Copy the remaining elements of R[], if there are any
    while j < n2:
        arr[k] = R[j]
        j += 1
        k += 1

def merge_sort(arr, left, right):
    if left < right:
        middle = left + (right - left) // 2
        merge_sort(arr, left, middle)
        merge_sort(arr, middle + 1, right)
        merge(arr, left, middle, right)

arr = [12, 11, 13, 5, 6, 7]
n = len(arr)

merge_sort(arr, 0, n - 1)

print("Sorted array:")
for i in range(n):
    print(arr[i], end=" ")
print()