def swap(array, a, b):
    array[a], array[b] = array[b], array[a]

def partition(array, low, high):
    pivot = array[high]
    i = low - 1

    for j in range(low, high):
        if array[j] < pivot:
            i += 1
            swap(array, i, j)
    swap(array, i + 1, high)
    return i + 1

def quickSort(array, low, high):
    if low < high:
        pivotIndex = partition(array, low, high)
        quickSort(array, low, pivotIndex - 1)
        quickSort(array, pivotIndex + 1, high)

def printArray(array):
    for i in array:
        print(i, end=" ")
    print()

array = [10, 7, 8, 9, 1, 5]
quickSort(array, 0, len(array) - 1)
print("Sorted array:", end=" ")
printArray(array)
