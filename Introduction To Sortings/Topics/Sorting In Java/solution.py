# Function to perform Bubble Sort
def bubble_sort(arr):
    n = len(arr)
    for i in range(n-1):
        # Last i elements are already in place
        for j in range(n-i-1):
            if arr[j] > arr[j+1]:
                # Swap arr[j] and arr[j+1]
                arr[j], arr[j+1] = arr[j+1], arr[j]

# Function to print an array
def print_array(arr):
    for i in arr:
        print(i, end=" ")
    print()

# Driver code
arr = [64, 34, 25, 12, 22, 11, 90]
bubble_sort(arr)
print("Sorted array:")
print_array(arr)
