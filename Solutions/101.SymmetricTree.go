func isS(p *TreeNode, q *TreeNode) bool{
    if p == nil || q == nil{
        return p == q
    }
    return p.Val == q.Val && isS(p.Left, q.Right) && isS(p.Right, q.Left)
}
func isSymmetric(root *TreeNode) bool {
    if root == nil{
        return true
    }else if root.Left == nil && root.Right == nil{
        return true
    }else if root.Left == nil || root.Right == nil{
        return false
    }else{
        return isS(root.Left, root.Right)
    }
}
