package main

import (
	"fmt"
)

type ListNode struct{
	Val int
	Next *ListNode
}

func mergeTwoLists(l1 *ListNode, l2 *ListNode) *ListNode{
	pre := &ListNode{Next: l1}
	theHead := pre
	for l1!=nil && l2!=nil{
		if l1.Val > l2.Val{
			pre.Next = l2
			l2 = l2.Next
			pre.Next.Next = l1
		}else{
			l1 = l1.Next
		}
		pre = pre.Next
	}

	if l2 != nil{
		pre.Next = l2
	}
	return theHead.Next
}