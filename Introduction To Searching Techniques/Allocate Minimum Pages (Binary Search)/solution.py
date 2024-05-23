def is_possible(arr, n, m, max_pages):
    student_count = 1
    current_sum = 0

    for i in range(n):
        if arr[i] > max_pages:
            return False

        if current_sum + arr[i] > max_pages:
            student_count += 1
            current_sum = arr[i]

            if student_count > m:
                return False
        else:
            current_sum += arr[i]

    return True

def find_pages(arr, n, m):
    if m > n:
        return -1

    low = max(arr)
    high = sum(arr)
    result = high

    while low <= high:
        mid = (low + high) // 2

        if is_possible(arr, n, m, mid):
            result = mid
            high = mid - 1
        else:
            low = mid + 1

    return result

# Example Usage
arr
