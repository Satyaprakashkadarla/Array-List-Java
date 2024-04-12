def find_subarray_with_given_sum(array, given_sum):
    start = 0  # Initialize start pointer
    end = 0    # Initialize end pointer
    current_sum = array[0]  # Initialize currentSum with first element

    while end < len(array):
        if current_sum == given_sum:  # If currentSum equals givenSum, subarray found
            print("Subarray found from index", start, "to", end)
            return
        elif current_sum < given_sum:  # If currentSum is less than givenSum, move end pointer forward
            end += 1
            if end < len(array):  # Avoid accessing out of bounds
                current_sum += array[end]
        else:  # If currentSum is greater than givenSum, move start pointer forward
            current_sum -= array[start]
            start += 1

    print("Subarray not found")  # If no subarray found


array = [1, 4, 20, 3, 10, 5]
given_sum = 33

find_subarray_with_given_sum(array, given_sum)
