#include <stdio.h>

int middleElement(int size){
    return size / 2;
}

int binarySearch(int arr[], int size, int target) {
    int middle_index = middleElement(size);

    // Check if target is the middle element
    if (arr[middle_index] == target) {
        return middle_index;
    }

    if (target > arr[middle_index]) {
        for (int i = middle_index + 1; i < size; i++) {
            if (arr[i] == target) {
                return i;
            }
        }
    }

    if (target < arr[middle_index]) {
        for (int i = middle_index - 1; i >= 0; i--) {
            if (arr[i] == target) {
                return i;
            }
        }
    }

    return -1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int target;
    printf("Enter Target (element to find in array): ");
    scanf("%d", &target);

    printf("Middle Element in Array: %d\n", arr[middleElement(size)]);
    int index = binarySearch(arr, size, target);
    if (index != -1) {
        printf("Index of Target: %d\n", index);
    } else {
        printf("Target not found in array.\n");
    }

    return 0;
}
