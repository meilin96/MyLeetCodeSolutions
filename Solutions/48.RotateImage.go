package main

func rotate(matrix [][]int) {
	for i := 0; i < len(matrix); i++ {
		for j := i; j < len(matrix[i]); j++ {
			matrix[i][j], matrix[j][i] = matrix[j][i], matrix[i][j]
		}
	}

	for i, v := range matrix {
		for j := 0; j < len(v)/2; j++ {
			matrix[i][j], matrix[i][len(v)-1-j] = matrix[i][len(v)-1-j], matrix[i][j]
		}
	}
}
