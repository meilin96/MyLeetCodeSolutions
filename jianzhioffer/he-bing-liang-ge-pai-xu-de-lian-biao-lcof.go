package main

// https://leetcode-cn.com/problems/he-bing-liang-ge-pai-xu-de-lian-biao-lcof/
/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */
func mergeTwoLists(l1 *ListNode, l2 *ListNode) *ListNode {
	head := &ListNode{}
	cur := head
	for l1 != nil && l2 != nil {
		if l1.Val > l2.Val {
			cur.Next = l2
			l2 = l2.Next
			cur = cur.Next
		} else {
			cur.Next = l1
			l1 = l1.Next
			cur = cur.Next
		}
	}

	if l1 == nil {
		cur.Next = l2
	}

	if l2 == nil {
		cur.Next = l1
	}

	return head.Next
}
func mergeTwoListsR(l1 *ListNode, l2 *ListNode) *ListNode {
	if l1 == nil {
		return l2
	}
	if l2 == nil {
		return l1
	}

	var n *ListNode

	if l1.Val > l2.Val {
		n = l2
		n.Next = mergeTwoLists(l1, l2.Next)
	} else {
		n = l1
		n.Next = mergeTwoLists(l1.Next, l2)
	}
	return n
}
