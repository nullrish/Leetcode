package main

import "fmt"

func removeElement(nums []int, val int) int {
	k := 0
	for i := 0; i < len(nums); i++ {
		if nums[i] != val {
			nums[k] = nums[i]
			k++
		}
	}
	return k
}

func main() {
	nums := []int{1, 2, 2, 3, 4, 5}
	val := 2
	k := removeElement(nums, val)
	for i := 0; i < k; i++ {
		fmt.Print(nums[i], "\t")
	}
}
