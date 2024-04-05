def find_leaders(arr):
    n = len(arr)
    leaders = []
    max_right = arr[n - 1]

    for i in range(n - 2, -1, -1):
        if arr[i] > max_right:
            max_right = arr[i]
            leaders.append(max_right)

    leaders.reverse()
    return leaders

arr = [16, 17, 4, 3, 5, 2]
print("Leaders in the array:", find_leaders(arr))
