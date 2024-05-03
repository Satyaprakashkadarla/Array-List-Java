package main

import "fmt"

func permutations(s string, current string) {
    if len(s) == 0 {
        fmt.Println(current)
    } else {
        for i := 0; i < len(s); i++ {
            newString := s
            current += string(s[i])
            newString = newString[:i] + newString[i+1:]
            permutations(newString, current)
            current = current[:len(current)-1]
        }
    }
}

func main() {
    inputString := "abc"
    current := ""
    fmt.Printf("Permutations of '%s' are:\n", inputString)
    permutations(inputString, current)
}
