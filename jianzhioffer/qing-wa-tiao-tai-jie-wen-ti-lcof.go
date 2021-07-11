package main

// https://leetcode-cn.com/problems/qing-wa-tiao-tai-jie-wen-ti-lcof/submissions/
func numWays(n int) int {
	if n < 2 {
		return 1
	}

	f0 := 1
	f1 := 1

	for i := 0; i < n; i++ {
		f0, f1 = f1, (f0+f1)%1000000007
	}
	return f0
}
