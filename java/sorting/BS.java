// bubble sort

// compare and swap adjacent elements once at a time
/*
 {3,2,1}
 > compare 3 and 2
 > 3 > 2 so swap them
 > {2,3,1}
 > follow the same for 3 and 1
 > doing the process n-1, times and swapping n-i-1 times to prevent out of bounds
 */

public class BS {

    public void bubbleSort(int arr[]) {
        int temp;
        int n = arr.length;
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j+1]) {
                    temp = arr[j+1];
                    arr[j+1] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }

    public static void main(String[] args) {

        BS sorter = new BS();

        int[] arr = {64, 34, 25, 12, 22, 11, 90};
        System.out.println("Original array: ");
        for (int n : arr) {
            System.out.println(n);
        }

        sorter.bubbleSort(arr);
        System.out.println("Sorted array: ");
        for (int n : arr) {
            System.out.println(n);
        }
        
    }
}