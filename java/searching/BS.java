// Binary Search

import java.util.Arrays;

public class BS {
    public int binarySearch(int[] arr, int target) {
        int low = 0;
        int high = arr.length - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] == target) {
                return mid;
            } else if (target < arr[mid]) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return -1;
    }

    public static void main(String[] args) {
        BS searcher = new BS();

        int[] arr = {44, 33, 5, 67, 89, 90};
        Arrays.sort(arr);
        int target = 33;
        int index = searcher.binarySearch(arr, target);

        if (index == -1) {
            System.out.println("Target not found in the given array.");
        } else {
            System.out.println("Target found at index: " + index);
        }
    }
}
