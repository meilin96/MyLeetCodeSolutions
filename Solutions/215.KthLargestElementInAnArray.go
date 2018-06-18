func findKthLargest(nums []int, k int) int {
	minheap := nums[:k]
	Heapify(minheap, false)
	
	for i := k;i < len(nums);i++{
		if nums[i] >= minheap[0]{
			minheap[0] = nums[i]
			percolateDown(minheap, 0, IsMaxHeap(false))
		}
	}
	return minheap[0]
}
func Heapify(src []int, ismax bool) {
	i := (len(src) - 1) / 2
	hc := IsMaxHeap(ismax)
	for ; i >= 0; i-- {
		percolateDown(src, i, hc)
	}
}

func IsMaxHeap(isMax bool) func(int, int) bool {
	return func(a int, b int) bool{
		if isMax {
			return a > b
		}else{
			return a < b
		}
	}
}

func percolateDown(src []int, parentIdx int, comper func(int, int) bool) {
	leftChildIdx := parentIdx*2 + 1
	rightChildIdx := (parentIdx + 1) * 2
	var percolateChildIdx int
	if (leftChildIdx <= len(src)-1) && (rightChildIdx <= len(src)-1) {
		if comper(src[leftChildIdx], src[rightChildIdx]) {
			percolateChildIdx = leftChildIdx
		} else {
			percolateChildIdx = rightChildIdx
		}
	} else if leftChildIdx <= len(src)-1 {
		percolateChildIdx = leftChildIdx
	} else if rightChildIdx <= len(src)-1 {
		percolateChildIdx = rightChildIdx
	} else {
		return
	}
	if comper(src[percolateChildIdx], src[parentIdx]) {
		t := src[percolateChildIdx]
		src[percolateChildIdx] = src[parentIdx]
		src[parentIdx] = t
		percolateDown(src, percolateChildIdx, comper)
	}
}

