func PreOder(p *TreeNode, q *TreeNode) bool{
    if (p == nil && q != nil) || (p != nil && q == nil){
        return false
    }else if p == nil && q == nil{
        return true
    }else{
        if p.Val == q.Val{
            return PreOder(p.Left, q.Left) && PreOder(p.Right, q.Right)
        }else{
            return false
        }
    }
    return false
}

func isSameTree(p *TreeNode, q *TreeNode) bool {
    return PreOder(p, q)
}