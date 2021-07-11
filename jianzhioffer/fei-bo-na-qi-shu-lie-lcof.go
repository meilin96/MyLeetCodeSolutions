package main

// https://leetcode-cn.com/problems/fei-bo-na-qi-shu-lie-lcof/submissions/
func fib(n int) int {
	if n < 2 {
		return n
	}
	f1 := 0
	f2 := 1
	sum := 0

	for i := 0; i <= n-2; i++ {
		sum = (f1 + f2) % 1000000007
		f1 = f2
		f2 = sum
	}
	return sum
}
