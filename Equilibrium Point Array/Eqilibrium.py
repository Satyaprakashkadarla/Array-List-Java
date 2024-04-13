def equilibrium_points(arr):
    equilibrium_indices = []
    n = len(arr)

    # If the array is empty, return an empty list
    if n == 0:
        return equilibrium_indices

    # Calculate the total sum of all elements in the array
    total_sum = sum(arr)

    # Initialize the left sum to 0
    left_sum = 0

    # Iterate through each element in the array to find equilibrium points
    for i in range(n):
        # Reduce the total sum by the current element
        total_sum -= arr[i]

        # If the left sum equals the total sum, it's an equilibrium point
        if left_sum == total_sum:
            equilibrium_indices.append(i)

        # Add the current element to the left sum
        left_sum += arr[i]

    return equilibrium_indices

# Example usage:
arr = [-7, 1, 5, 2, -4, 3, 0]
result = equilibrium_points(arr)
print("Equilibrium points:", result)
