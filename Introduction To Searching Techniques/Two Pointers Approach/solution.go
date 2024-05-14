package main

import "fmt"

func twoSum(nums []int, target int) []int {
    left := 0
    right := len(nums) - 1
    
    for left < right {
        currentSum := nums[left] + nums[right]
        if currentSum == target {
            return []int{nums[left], nums[right]} // Found the pair
        } else if currentSum < target {
            left++ // Move left pointer to the right
        } else {
            right-- // Move right pointer to the left
        }
    }
    
    return []int{} // No pair found
}

func main() {
    nums := []int{2, 7, 11, 15}
    target := 9
    result := twoSum(nums, target)
    fmt.Println(result) // Output: [2 7]
}
