def max_sum_subarray(nums, k):
    # Initialize variables for maximum sum and current sum
    max_sum = 0
    current_sum = sum(nums[:k])  # Calculate the sum of the first k elements
    max_sum = current_sum  # Initialize max_sum with the sum of the first k elements

    # Iterate through the array starting from index k
    for i in range(k, len(nums)):
        # Add the current element and subtract the element k positions behind
        current_sum += nums[i] - nums[i - k]
        # Update max_sum if the current sum is greater
        max_sum = max(max_sum, current_sum)

    return max_sum

# Example usage
nums = [1, 3, -1, -3, 5, 3, 6, 7]
k = 3
# Print the maximum sum of a subarray of size k
print(f"Maximum sum of subarray of size {k}: {max_sum_subarray(nums, k)}")
