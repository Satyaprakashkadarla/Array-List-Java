def calculate_prefix_sum(array):
    n = len(array)
    prefix_sum = [0] * n

    # Compute prefix sum
    prefix_sum[0] = array[0]
    for i in range(1, n):
        prefix_sum[i] = prefix_sum[i - 1] + array[i]

    return prefix_sum

def get_sum_in_range(prefix_sum, l, r):
    if l == 0:
        return prefix_sum[r]
    else:
        return prefix_sum[r] - prefix_sum[l - 1]

# Example usage:
array = [1, 2, 3, 4, 5]
prefix_sum = calculate_prefix_sum(array)

# Query: sum of elements from index 1 to 3 (inclusive)
l = 1
r = 3
print("Sum from index", l, "to", r, "is:", get_sum_in_range(prefix_sum, l, r))
