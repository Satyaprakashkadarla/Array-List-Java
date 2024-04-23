# Function to calculate factorial using tail recursion
def factorial(n, acc=1):
    # Base case: if n is 0, return the accumulator
    if n == 0:
        return acc
    # Recursive case: multiply current n with accumulator and call factorial with n-1
    else:
        return factorial(n - 1, acc * n)

# Example usage
n = 5  # Example input
result = factorial(n)
print(f"Factorial of {n} is {result}")
