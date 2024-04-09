def max_subarray_sum(arr):
    # Initialize variables to keep track of maximum subarray sum
    max_sum = arr[0]
    current_sum = arr[0]

    # Iterate through the array to find the maximum subarray sum using Kadane's algorithm
    for num in arr[1:]:
        # Update current_sum to include the current element or start a new subarray
        current_sum = max(num, current_sum + num)
        # Update max_sum to keep track of the maximum subarray sum seen so far
        max_sum = max(max_sum, current_sum)

    return max_sum

def min_subarray_sum(arr):
    # Minimum subarray sum is the maximum subarray sum of the negative of the original array
    return -max_subarray_sum([-x for x in arr])

def max_circular_sum(arr):
    # Maximum subarray sum
    max_sum = max_subarray_sum(arr)
    
    # Minimum subarray sum (equivalent to maximum subarray sum of the negative of the original array)
    min_sum = min_subarray_sum(arr)
    
    # Total sum of the original array
    total_sum = sum(arr)
    
    # Maximum circular sum is the maximum of maximum subarray sum and (total sum - minimum subarray sum)
    circular_max = max(max_sum, total_sum - min_sum)
    
    return circular_max

# Example usage:
arr = [8, -1, 3, 4]
print("Maximum circular sum:", max_circular_sum(arr))
