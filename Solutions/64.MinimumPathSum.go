package main

import "fmt"

func main() {
	fmt.Println(minPathSum([][]int{{1, 2, 3}, {4, 5, 6}}))
}

func minPathSum(grid [][]int) int {
	m := len(grid[0])
	n := len(grid)
	dp := make([][]int, n)
	for i := range dp {
		dp[i] = make([]int, m)
	}
	dp[0][0] = grid[0][0]

	for i := 1; i < m; i++ {
		dp[0][i] = grid[0][i] + dp[0][i-1]
	}

	for i := 1; i < n; i++ {
		dp[i][0] = grid[i][0] + dp[i-1][0]
	}

	for i := 1; i < n; i++ {
		for j := 1; j < m; j++ {
			dp[i][j] = min(dp[i-1][j], dp[i][j-1]) + grid[i][j]

		}
	}

	return dp[n-1][m-1]
}

func min(a, b int) int {
	if a < b {
		return a
	}
	return b
}
