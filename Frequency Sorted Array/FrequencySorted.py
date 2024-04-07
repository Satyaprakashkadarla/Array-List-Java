def findFrequencies(sortedArray):
    if not sortedArray:
        return

    currentElement = sortedArray[0]
    currentCount = 1

    # Iterate through the sorted array
    for i in range(1, len(sortedArray)):
        if sortedArray[i] == currentElement:
            currentCount += 1
        else:
            print(currentElement, ":", currentCount)
            currentElement = sortedArray[i]
            currentCount = 1

    # Print or store the frequency of the last element
    print(currentElement, ":", currentCount)

# Example usage:
sortedArray = [1, 1, 2, 2, 2, 3, 3, 4, 5, 5, 5]
findFrequencies(sortedArray)
