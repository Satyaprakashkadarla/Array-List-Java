# Function to find the majority element in the array
def find_majority_element(arr):
    # Initialize candidate and count
    candidate = arr[0]
    count = 1

    # Finding the potential candidate
    for i in range(1, len(arr)):
        if count == 0:
            candidate = arr[i]
            count = 1
        elif arr[i] == candidate:
            count += 1
        else:
            count -= 1

    # Verifying the candidate
    count = 0
    for num in arr:
        if num == candidate:
            count += 1

    # If candidate occurs more than n/2 times, it's the majority element
    if count > len(arr) / 2:
        return candidate
    else:
        return None  # No majority element

arr = [3, 3, 4, 2, 4, 4, 2, 4, 4]
majority_element = find_majority_element(arr)
if majority_element is not None:
    print("Majority Element is:", majority_element)
else:
    print("No majority element found")
