def max_appearing_element(intervals):
    SIZE = 1000000  # Define the size of the count array
    count = [0] * SIZE  # Initialize an array count of size SIZE with all elements set to 0

    # Iterate through each interval in intervals
    for start, end in intervals:
        # Increment count[start] by 1
        count[start] += 1
        # Decrement count[end] by 1
        count[end] -= 1

    max_count = 0
    max_element = 0
    current_count = 0

    # Iterate through each element in count
    for i in range(SIZE):
        # Add count[i] to current_count
        current_count += count[i]
        # If current_count is greater than max_count
        if current_count > max_count:
            # Set max_count to current_count
            max_count = current_count
            # Set max_element to i
            max_element = i

    return max_element

# Example intervals
intervals = [(1, 3), (2, 5), (9, 12), (5, 8)]

# Find the maximum appearing element
max_element = max_appearing_element(intervals)

# Print the result
print("Maximum appearing element:", max_element)
