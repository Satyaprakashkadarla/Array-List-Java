# Function to calculate factorial recursively
def factorial(n):
    # Base case: if n is 0 or 1, return 1
    if n == 0 or n == 1:
        return 1
    # Recursive case: if n is greater than 1, calculate factorial recursively
    else:
        return n * factorial(n - 1)

# Main function to test the factorial function
def main():
    n = int(input("Enter a non-negative integer: "))
    # Check if the input is non-negative
    if n < 0:
        print("Invalid input! Please enter a non-negative integer.")
    else:
        result = factorial(n)
        print("Factorial of", n, "is", result)

if __name__ == "__main__":
    main()
