package main

import "fmt"

/**
 * Definition for singly-linked list.
 *
 */
type ListNode struct {
	Val int
	Next *ListNode
}

func swapPairs(head *ListNode) *ListNode {
	p := head
	realHead := head
	isHead := true
	pp := p
	for p != nil && p.Next != nil {
		tem := p.Next.Next
		if isHead {
			realHead = p.Next
			isHead = false
		}else{
			pp.Next = p.Next
		}
		p.Next.Next = p
		p.Next = tem
		pp = p
		p = tem
	}
	return realHead
}

func swapPairs2(head *ListNode) *ListNode {
	fake := &ListNode{Next: head}
	tail := fake
	// head 假设为 1，2，3
	for tail.Next != nil && tail.Next.Next != nil {
		tmp1 := tail.Next
		tmp2 := tmp1.Next
		tmp1.Next = tmp2.Next
		tmp2.Next = tmp1
		tail.Next = tmp2
		tail = tmp1
	}
	// fmt.Println(ToString(fake.Next))
	return fake.Next
}

func main(){
//	f := ListNode{3, nil}
//	t := ListNode{3, &f}
	sec := ListNode{2, nil}
	head := ListNode{1, &sec}
	phead := &head
	fmt.Println(swapPairs(phead).Val, swapPairs(phead).Next.Val)
}