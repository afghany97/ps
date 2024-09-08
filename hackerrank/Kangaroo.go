// https://www.hackerrank.com/challenges/kangaroo/problem?isFullScreen=true
package main

import (
	"fmt"
	"math"
)

/*
 * Complete the 'kangaroo' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. INTEGER x1
 *  2. INTEGER v1
 *  3. INTEGER x2
 *  4. INTEGER v2
 */

func kangaroo(x1 int32, v1 int32, x2 int32, v2 int32) string {
	previousDistance := math.Abs(float64(x1 - x2))
	for {
		x1 += v1
		x2 += v2
		currentDistance := math.Abs(float64(x1 - x2))
		if currentDistance >= previousDistance {
			return "NO"
		}
		if x1 == x2 {
			return "YES"
		}
		previousDistance = currentDistance
	}
}

func main() {
	fmt.Println(kangaroo(0, 3, 4, 2))
	fmt.Println(kangaroo(0, 2, 5, 3))
	fmt.Println(kangaroo(43, 2, 70, 2))
}
