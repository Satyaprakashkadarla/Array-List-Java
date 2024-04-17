def is_kth_bit_set(n, k):
    # Left shift 1 by k positions
    mask = 1 << k
    # Bitwise AND with n
    # If the result is non-zero, then the k-th bit is set
    return (n & mask) != 0

# Example usage
n = 5  # Binary representation: 101
k = 2  # Check if the 2nd bit (from right to left) is set
print(is_kth_bit_set(n, k))  # Output: True
