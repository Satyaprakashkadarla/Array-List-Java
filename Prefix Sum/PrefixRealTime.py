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

# Input array from user
array = list(map(int, input("Enter the elements of the array separated by space: ").split()))

# Calculate prefix sum
prefix_sum = calculate_prefix_sum(array)

# Real-time querying of sum within range
while True:
    l, r = map(int, input("Enter the range (0-based indexing) separated by space (enter -1 -1 to exit): ").split())
    if l == -1 and r == -1:
        print("Exiting...")
        break
    if l < 0 or r < 0 or r >= len(array) or l > r:
        print("Invalid range!")
        continue
    print("Sum from index", l, "to", r, "is:", get_sum_in_range(prefix_sum, l, r))
