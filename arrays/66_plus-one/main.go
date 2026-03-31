package main

import (
	"fmt"
	"slices"
)

func plusOne(digits []int) []int {
	for i := len(digits) - 1; i >= 0; i-- {
		if digits[i] < 9 {
			digits[i]++
			return digits
		}
		digits[i] = 0
	}
	digits = slices.Insert(digits, 0, 1)
	return digits
}

func main() {
	digit1 := []int{2, 3, 4}
	digit2 := []int{9, 9, 9, 9, 9}
	plusOne(digit1)
	digit2 = plusOne(digit2)
	fmt.Println(digit1)
	fmt.Println(digit2)
}
