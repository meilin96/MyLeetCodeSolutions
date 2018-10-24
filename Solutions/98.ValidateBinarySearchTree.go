package main

func isValidBST(root *TreeNode) bool {
	if root == nil || (root.Left == nil && root.Right == nil) {
		return true
	}
	return r(root, nil, nil)
}

func r(node *TreeNode, min, max *int) bool {
	if node == nil {
		return true
	}

	if (min != nil && node.Val <= *min) || (max != nil && node.Val >= *max) {
		return false
	}
	return r(node.Left, min, &node.Val) && r(node.Right, &node.Val, max)
}
