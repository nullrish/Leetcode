package main

import "fmt"

func removeDuplicate(nums []int) int {
	k := 1
	for i := 1; i < len(nums); i++ {
		if nums[i-1] != nums[i] {
			nums[k] = nums[i]
			k++
		}
	}
	return k
}

func main() {
	nums := []int{1, 1, 2, 2, 3, 5, 5}
	unique := removeDuplicate(nums)
	fmt.Println("Unique elements:", unique)
	for i := 0; i < unique; i++ {
		fmt.Print(nums[i], "\t")
	}
}
