def reverse_array(arr):
    n = len(arr)
    reversed_arr = [0] * n
    j = n - 1
    for i in range(n):
        reversed_arr[j] = arr[i]
        j -= 1
    return reversed_arr

arr = [1, 2, 3, 4, 5]
reversed_arr = reverse_array(arr)
print("Original Array:", arr)
print("Reversed Array:", reversed_arr)
