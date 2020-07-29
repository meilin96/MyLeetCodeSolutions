package main

import "fmt"

func main() {
	for _, v := range permute([]int{1, 2, 3, 4}) {
		fmt.Println(v)
	}
}

func permute(nums []int) [][]int {
	ret := [][]int{}
	var backtrace func(nums []int, track []int)
	backtrace = func(nums []int, track []int) {
		if len(track) == len(nums) {
			ret = append(ret, track)
			return
		}

		for _, v := range nums {
			if contain(track, v) {
				continue
			}
			track = append(track, v)
			backtrace(nums, track)
			track = Pop(track)
		}
	}
	backtrace(nums, []int{})
	return ret
}

func contain(si []int, d int) bool {
	for _, v := range si {
		if v == d {
			return true
		}
	}
	return false
}

func Pop(si []int) []int {
	s := []int{}
	s = append(s, si[:len(si)-1]...)
	return s
}
