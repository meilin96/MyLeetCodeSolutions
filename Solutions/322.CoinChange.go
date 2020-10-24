package main

import "fmt"

func main() {
	fmt.Println(coinChange([]int{1, 2, 5}, 11))
}

func coinChange(coins []int, amount int) int {
	memo := make(map[int]int, amount+1)
	var r func(int) int
	r = func(n int) int {
		if v, ok := memo[n]; ok {
			return v
		}

		if n == 0 {
			return 0
		}

		if n < 0 {
			return -1
		}

		res := 1 << 31
		for _, coin := range coins {
			f := r(n - coin)
			if f == -1 {
				continue
			}
			if f+1 < res {
				res = f + 1
			}
		}
		if res != 1<<31 {
			memo[n] = res
		} else {
			memo[n] = -1
		}
		return memo[n]
	}
	r(amount)
	fmt.Println(memo)
	return memo[amount]
}
