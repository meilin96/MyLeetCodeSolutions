func hammingDistance(x int, y int) int {
    resNum := x^y
    var res int = 0
    for resNum != 0{
        resNum = resNum & (resNum - 1)
        res++
    }
    return res
}