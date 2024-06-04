def intersection(array1, array2):
    result = []
    i = 0
    j = 0

    # Iterate until one pointer reaches the end of its array
    while i < len(array1) and j < len(array2):
        # Compare elements at current pointers
        if array1[i] < array2[j]:
            # If element in array1 is less, move to next element in array1
            i += 1
        elif array1[i] > array2[j]:
            # If element in array2 is less, move to next element in array2
            j += 1
        else:
            # If elements are equal, add to result and move to next in both
            result.append(array1[i])
            i += 1
            j += 1

    # Print result
    print(result)