package main

import "fmt"

func power(x, n int) int {
    if n == 0 {
        return 1
    } else if n%2 == 0 {
        temp := power(x, n/2)
        return temp * temp
    } else {
        temp := power(x, (n-1)/2)
        return x * temp * temp
    }
}

func main() {
    x := 2
    n := 5
    fmt.Printf("%d^%d = %d\n", x, n, power(x, n))
}
