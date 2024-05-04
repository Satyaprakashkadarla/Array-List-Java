#include <stdio.h>

int power(int x, int n) {
    if (n == 0)
        return 1;
    else if (n % 2 == 0) {
        int temp = power(x, n/2);
        return temp * temp;
    } else {
        int temp = power(x, (n-1)/2);
        return x * temp * temp;
    }
}

int main() {
    int x = 2;
    int n = 5;
    printf("%d^%d = %d\n", x, n, power(x, n));
    return 0;
}
