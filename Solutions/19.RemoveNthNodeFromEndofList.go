package main

import "fmt"

func main() {
	fmt.Println("vim-go")
}

// Definition for singly-linked list.
type ListNode struct {
	Val  int
	Next *ListNode
}

func removeNthFromEnd(head *ListNode, n int) *ListNode {
	f := []*ListNode{}
	h := &ListNode{Next: head}
	p := h

	for p != nil {
		f = append(f, p)
		p = p.Next
	}

	f[len(f)-n-1].Next = f[len(f)-n].Next
	return h.Next
}
