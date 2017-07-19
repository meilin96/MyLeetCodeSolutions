package main


import (
	"fmt"
//	"reflect"
)

func plusOne(digits []int) []int {
	isJinwei := true
	if len(digits) == 1 && digits[0] == 0{
		digits[0] += 1
		return digits
	}
	for i := len(digits) - 1 ;i >= 0;i--{
		if isJinwei {
			if digits[i] == 9{
				isJinwei = true
				digits[i] = 0
			}else {
				isJinwei = false
				digits[i] += 1
			}
		}else{
			return digits
		}
	}
	if isJinwei {
		digits = append([]int{1}, digits...)
	}
	return digits
}


func main(){
	var a = []int{9, 9, 9}

	fmt.Println(plusOne(a))
}