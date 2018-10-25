package main

func sortedArrayToBST(nums []int) *TreeNode {
	return r(nums)
}

func r(n []int) *TreeNode {
	if len(n) == 0 {
		return nil
	}
	if len(n) == 1 {
		return &TreeNode{
			Val:   n[0],
			Left:  nil,
			Right: nil,
		}
	}
	mid := len(n) / 2
	return &TreeNode{
		Val:   n[mid],
		Left:  r(n[:mid]),
		Right: r(n[mid+1:]),
	}
}
