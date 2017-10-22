/**
 * Definition for a binary tree node.
  * type TreeNode struct {
   *     Val int
    *     Left *TreeNode
     *     Right *TreeNode
      * }
       */
func minDepth(root *TreeNode) int {
  if
    root == nil { return 0 }
  return min(minDepth(root.Left), minDepth(root.Right)) + 1
}
func min(a int, b int) int {
  if
    a == 0 && b != 0 { return b }
  else if
    a != 0 && b == 0 { return a }
  if
    a < b { return a }
  else {
    return b
  }
}
