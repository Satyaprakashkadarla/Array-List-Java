def generate_power_set(nums):
    n = len(nums)  # Get the length of the input set
    power_set = []  # Initialize an empty list to store the power set

    # Iterate through all possible binary numbers of length n
    for i in range(1 << n):
        subset = []  # Initialize an empty list to store the subset

        # Iterate through the elements of nums
        for j in range(n):
            # Check if the jth bit of binary number i is set
            if i & (1 << j):
                # If the bit is set, add the corresponding element to the subset
                subset.append(nums[j])

        # Add the subset to the power set
        power_set.append(subset)

    return power_set

# Example usage:
nums = [1, 2, 3]
print("Power set:", generate_power_set(nums))
