package main

import (
	"fmt"
	"math"
)
//Better Solution:
//func isPalindrome(x int) bool {
//	if x < 0 {
//		return false
//	}
//	p := x
//	q := 0
//	for p != 0 {
//		q = q*10 + p%10
//		p /= 10
//	}
//	return q == x
//}

func isPalindrome(x int) bool {
	if x < 0{
		return false
	}
	tx := x
	sizeofx := 0
	for tx!=0 {
		tx /= 10
		sizeofx++;
	}

	for x != 0{
		head := x / int(math.Pow(10, float64(sizeofx-1)))
		tail := x % 10
		//fmt.Println(head, tail, x, sizeofx)
		if head != tail{
			return false
		}else{
			x -= head * int(math.Pow(10, float64(sizeofx-1)))
			x -= tail
			x /= 10
			sizeofx -= 2
		}
	}
	return true
}

func main() {
	fmt.Println(isPalindrome(1131))
}