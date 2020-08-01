package main

import (
	"fmt"
)

func main() {
	fmt.Println(levelOrder(
		&TreeNode{
			Val: 1,
			Left: &TreeNode{
				Val: 2,
				Right: &TreeNode{
					Val: 5,
				},
			},
			Right: &TreeNode{
				Val: 3,
				Left: &TreeNode{
					Val: 6,
				},
			},
		}))
}

// Definition for a binary tree node.
type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

type Pair struct {
	N     *TreeNode
	Level int
}

func levelOrder(root *TreeNode) [][]int {
	queue := []*Pair{{N: root, Level: 0}}
	ret := [][]int{}
	curLevel := -1

	for {
		if len(queue) == 0 {
			break
		}
		node := queue[0]
		queue = queue[1:]

		if node.N == nil {
			continue
		}

		if node.Level != curLevel {
			ret = append(ret, []int{node.N.Val})
			curLevel++
		} else {
			ret[len(ret)-1] = append(ret[len(ret)-1], node.N.Val)
		}

		if node.N.Left != nil {
			queue = append(queue, &Pair{N: node.N.Left, Level: curLevel + 1})
		}

		if node.N.Right != nil {
			queue = append(queue, &Pair{N: node.N.Right, Level: curLevel + 1})
		}

	}
	return ret
}

// func r(node *TreeNode, stack []*TreeNode, ret [][]int) {
// 	if node == nil {
// 		return
// 	}
//
// 	if node.Level
//
// }
