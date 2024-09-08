// https://leetcode.com/problems/climbing-stairs/description/
package main

import "fmt"

func main() {
	fmt.Println(climbStairs(4))
}

func climbStairs(n int) int {
	if n == 0 || n == 1 {
		return n
	}
	first := 1
	second := 2
	for i := 2; i < n; i++ {
		second, first = first+second, second
	}
	return second
}
