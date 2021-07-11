package main

// https://leetcode-cn.com/problems/yong-liang-ge-zhan-shi-xian-dui-lie-lcof/submissions/
type CQueue struct {
	stackin  []int
	stackout []int
}

func Constructor() CQueue {
	return CQueue{stackin: make([]int, 0), stackout: make([]int, 0)}
}

func (this *CQueue) AppendTail(value int) {
	this.stackin = append(this.stackin, value)
}

func (this *CQueue) DeleteHead() int {
	if len(this.stackout) == 0 {
		for i := len(this.stackin) - 1; i >= 0; i-- {
			this.stackout = append(this.stackout, this.stackin[i])
		}
		this.stackin = []int{}
	}
	if len(this.stackout) == 0 {
		return -1
	}
	res := this.stackout[len(this.stackout)-1]
	this.stackout = this.stackout[:len(this.stackout)-1]
	return res
}
