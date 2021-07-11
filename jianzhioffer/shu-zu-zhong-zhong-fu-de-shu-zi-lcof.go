package main

// https://leetcode-cn.com/problems/shu-zu-zhong-zhong-fu-de-shu-zi-lcof/submissions/
func findRepeatNumber(nums []int) int {
	res := 0
	for i := 0; i < len(nums); {
		if i == nums[i] {
			i++
			continue
		} else {
			if nums[i] == nums[nums[i]] {
				res = nums[i]
				return res
			} else {
				tmp := nums[i]
				nums[i] = nums[tmp]
				nums[tmp] = tmp
			}
		}
	}
	return res
}
