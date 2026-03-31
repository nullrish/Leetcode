package main

import "fmt"

func searchInsert(nums []int, target int) int {
	low := 0
	high := len(nums) - 1
	for low <= high {
		mid := low + (high-low)/2
		if nums[mid] == target {
			return mid
		}
		if nums[mid] < target {
			low = mid + 1
		} else {
			high = mid - 1
		}
	}
	return low
}

func main() {
	nums := []int{1, 2, 3, 4, 5, 6, 7}
	target := 6
	pos := searchInsert(nums, target)
	fmt.Println("Position of", target, "is", pos)
}
