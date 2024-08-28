package main

import (
	"fmt"
)

func jumpSearch(arr []int, target int) {
	n := len(arr)
	start := 0
	blockSize := 3

	for start < n {
		end := start + blockSize
		if end > n {
			end = n
		}

		for i := start; i < end; i++ {
			if arr[i] == target {
				fmt.Printf("Target Found at Index %d\n", i)
			}
		}
		start += blockSize
	}
}

func main() {
	arr := []int{1, 2, 3, 4, 5, 6, 7, 8, 9}
	target := 7
	jumpSearch(arr, target)
}
