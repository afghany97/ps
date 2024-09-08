// https://leetcode.com/problems/valid-parentheses/description/
package main

import (
	"errors"
	"fmt"
)

type stack struct {
	s []string
}

func NewStack() *stack {
	return &stack{make([]string, 0)}
}

func (s *stack) Push(v string) {
	s.s = append(s.s, v)
}

func (s *stack) Length() int {
	return len(s.s)
}

func (s *stack) Pop() (string, error) {
	l := len(s.s)
	if l == 0 {
		return "", errors.New("Empty Stack")
	}

	res := s.s[l-1]
	s.s = s.s[:l-1]
	return res, nil
}

func (s *stack) Delete(index int) bool {
	if index >= len(s.s) {
		return false
	}
	s.s = append(s.s[:index], s.s[index+1:]...)
	return true
}

func main() {
	x := "([)]"
	fmt.Println(isValid(x))

}

func isValid(s string) bool {
	stack := NewStack()
	var openParenthesesByClose = map[string]string{")": "(", "}": "{", "]": "["}

	for i, _ := range s {
		char := string([]rune(s)[i])
		if IsOpenParentheses(char) {
			stack.Push(char)
		} else {
			x, _ := stack.Pop()
			if x != openParenthesesByClose[char] {
				return false
			}
		}
	}
	if stack.Length() == 0 {
		return true
	}
	return false
}

func IsOpenParentheses(c string) bool {
	var openParentheses [3]string
	openParentheses[0] = "("
	openParentheses[1] = "{"
	openParentheses[2] = "["
	for i := 0; i < len(openParentheses); i++ {
		if c == openParentheses[i] {
			return true
		}
	}
	return false
}
