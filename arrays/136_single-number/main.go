package main

import "fmt"

func singleNumber(nums []int) int {
	var ans int
	for _, n := range nums {
		ans ^= n
	}
	return ans
}

func main() {
	a := []int{4, 2, 3, 2, 3, 4, 5, 6, 6}
	fmt.Println("Single number from", a, "is", singleNumber(a))
}
