package main

func containsDuplicate(nums []int) bool {
	if len(nums) == 0 {
		return false
	}
	m := make(map[int]int, len(nums)-1)
	for _, k := range nums {
		if _, ok := m[k]; ok == true {
			return true
		} else {
			m[k] = 1
		}
	}
	return false
}
