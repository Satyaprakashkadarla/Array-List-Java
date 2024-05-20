def is_possible(arr, n, m, mid):
    students = 1
    pages = 0

    for i in range(n):
        if pages + arr[i] <= mid:
            pages += arr[i]
        else:
            students += 1
            if students > m or arr[i] > mid:
                return False
            pages = arr[i]

    return True

def find_min_pages(arr, n, m):
    if m > n:
        return -1

    sum_pages = 0
    max_page = arr[0]

    for i in range(n):
        sum_pages += arr[i]
        max_page = max(max_page, arr[i])

    start = max_page
    end = sum_pages

    while start <= end:
        mid = (start + end) // 2

        if is_possible(arr, n, m, mid):
            ans = mid
            end = mid - 1
        else:
            start = mid + 1

    return ans

pages = [8, 15, 10, 20, 8]
M = 2

print("Minimum number of pages =", find_min_pages(pages, len(pages), M))