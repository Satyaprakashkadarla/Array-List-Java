package main

import "fmt"

func findTriplet(nums []int, target int) []int {
    n := len(nums)
    for i := 0; i < n-2; i++ {
        left := i + 1
        right := n - 1
        for left < right {
            currentSum := nums[i] + nums[left] + nums[right]
            if currentSum == target {
                return []int{nums[i], nums[left], nums[right]} // Found the triplet
            } else if currentSum < target {
                left++ // Increment left pointer
            } else {
                right-- // Decrement right pointer
            }
        }
    }
    return []int{} // No triplet found
}

func main() {
    nums := []int{2, 3, 4, 6, 8, 9, 11}
    target := 20
    result := findTriplet(nums, target)
    if len(result) > 0 {
        fmt.Println(result) // Output: [3 8 9]
    } else {
        fmt.Println("No triplet found")
    }
}
s