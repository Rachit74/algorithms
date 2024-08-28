package main

import "fmt"

func linearSearch(arr []int, target int) {
	for i := 0; i < len(arr); i++ {
		if target != arr[i] {
			continue
		} else {
			fmt.Printf("Target:%d\nFound At Index: %d\n", target, i)
		}
	}
}

func main() {
	var arr = []int{1, 2, 3, 4, 5, 7, 8, 9}
	var target = 7
	linearSearch(arr, target)
}
