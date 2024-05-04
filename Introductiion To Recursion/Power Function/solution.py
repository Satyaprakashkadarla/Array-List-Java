def power(x, n):
    if n == 0:
        return 1
    elif n % 2 == 0:
        temp = power(x, n//2)
        return temp * temp
    else:
        temp = power(x, (n-1)//2)
        return x * temp * temp

x = 2
n = 5
print(f"{x}^{n} = {power(x, n)}")
