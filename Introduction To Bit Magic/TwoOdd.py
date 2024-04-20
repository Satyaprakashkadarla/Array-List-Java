def find_odd_occurrences_xor(arr):
    # Initialize the result to 0
    result = 0

    # Step 1: Take XOR of all elements
    for num in arr:
        result ^= num

    return result

# Example usage:
arr = [4, 3, 2, 4, 1, 3, 2, 1, 4, 4]
print("Element with odd occurrence:", find_odd_occurrences_xor(arr))
