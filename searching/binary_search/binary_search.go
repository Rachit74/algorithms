package main

import (
	"fmt"
	"sort"
)

func binarySearch(arr []int, target int, low int, high int) int {
	sort.Ints(arr) //sorts the array
	mid := (low + high) / 2

	if arr[mid] == target {
		return mid
	} else if arr[mid] > target {
		// Recursion on the left side
		// set high=mid-1 when left side selected
		return binarySearch(arr, target, low, mid-1)
	} else {
		// Recursion on the right side
		// set low=mid+1 when right side selected
		return binarySearch(arr, target, mid+1, high)
	}
}

func main() {

	arr := []int{1, 6, 8, 4, 2, 7, 88, 33, 66, 22, 56, 34, 89, 21}
	low := 0
	high := len(arr) - 1
	target := 4

	res := binarySearch(arr, target, low, high)

	fmt.Printf("Element %d Found at Index %d\n", target, res)
}
