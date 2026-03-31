package main

import (
	"fmt"
	"strings"
)

func longestCommonPrefix(strs []string) string {
	prefix := strs[0]
	for _, str := range strs {
		for !strings.HasPrefix(str, prefix) {
			prefix = prefix[:len(prefix)-1]
			if prefix == "" {
				return ""
			}
		}
	}
	return prefix
}

func main() {
	str := []string{"fight", "figst", "figst"}
	fmt.Println(longestCommonPrefix(str))
}
