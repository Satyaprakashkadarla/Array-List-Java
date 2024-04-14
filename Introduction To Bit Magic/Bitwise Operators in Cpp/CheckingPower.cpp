Checking for Power of Two:

// Checking if a number is a power of two
bool isPowerOfTwo(int n) {
    return n && !(n & (n - 1));
}
