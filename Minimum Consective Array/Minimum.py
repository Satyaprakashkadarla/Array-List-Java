def min_consecutive_flips(array):
    flip_count = 0
    current = array[0]
    
    for num in array[1:]:
        if num != current:
            flip_count += 1
            current = num
    
    return flip_count

# Example usage:
array = [1, 0, 0, 1, 0, 1, 1, 0]
result = min_consecutive_flips(array)
print("Minimum consecutive flips needed:", result)
