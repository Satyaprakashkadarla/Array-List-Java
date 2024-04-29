def generate_subsets(s):
    subsets = []
    n = len(s)

    # Iterate through all binary numbers from 0 to 2^n - 1
    for i in range(1 << n):
        subset = []

        # Iterate through each bit of the current binary number
        for j in range(n):
            # Check if j-th bit of i is set
            if i & (1 << j):
                # If set, add the corresponding element from the original set to the subset
                subset.append(s[j])

        # Add the current subset to the list of subsets
        subsets.append(subset)

    # Return the list of subsets
    return subsets

# Example usage
s = [1, 2, 3]
subsets = generate_subsets(s)

# Print all subsets
for subset in subsets:
    print(subset)
