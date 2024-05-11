# Custom comparison function to compare numbers by their square roots
def compareBySqrt(a, b):
    sqrt_a = a ** 0.5
    sqrt_b = b ** 0.5

    return sqrt_a < sqrt_b

arr = [16, 25, 9, 4, 36]

# Sorting the array by square roots
arr.sort(key=lambda x: x ** 0.5)

# Printing the sorted array
print("Sorted array:", *arr)
