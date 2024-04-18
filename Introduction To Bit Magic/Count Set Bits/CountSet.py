def count_set_bits(n):
    count = 0
    while n != 0:
        n &= (n - 1)  # Clears the rightmost set bit
        count += 1
    return count

# Example usage
n = 23  # Example input
print("Number of set bits:", count_set_bits(n))
