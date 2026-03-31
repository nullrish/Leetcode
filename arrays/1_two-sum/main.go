package main

import "fmt"

func twoSum(nums []int, target int) []int {
	complements := make(map[int]int)
	for i := 0; i < len(nums); i++ {
		diff := target - nums[i]
		if val, ok := complements[diff]; ok {
			return []int{val, i}
		}
		complements[nums[i]] = i
	}
	return []int{}
}

func main() {
	nums := []int{2, 7, 11, 15}
	ans := twoSum(nums, 9)
	for _, val := range ans {
		fmt.Println(val)
	}
}
