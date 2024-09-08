// https://leetcode.com/problems/roman-to-integer/

package main

import "fmt"

func romanToInt(s string) int {
	var romanMapping = map[string]int{"I": 1, "V": 5, "X": 10, "L": 50, "C": 100, "D": 500, "M": 1000}
	result := 0
	for i := 0; i < len(s); i++ {
		currentChar := string([]rune(s)[i])
		addition := romanMapping[currentChar]
		if i < len(s)-1 {
			nextChar := string([]rune(s)[i+1])
			if romanMapping[nextChar] > romanMapping[currentChar] {
				addition = romanMapping[nextChar] - romanMapping[currentChar]
				i++
			}
		}
		result += addition
	}
	return result
}

func main() {
	fmt.Println(romanToInt("III"))
	fmt.Println(romanToInt("LVIII"))
	fmt.Println(romanToInt("MCMXCIV"))
}
