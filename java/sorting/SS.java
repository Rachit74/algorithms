// Selection sort

public class SS {

    public void selectionSort(int[] arr) {
        int n = arr.length;
        for (int i = 0; i < n-1; i++) {
            int smallest = i;
            for (int j = i + 1; j < n; j++) {
                if (arr[j] < arr[smallest]) {
                    int temp = smallest;
                    smallest = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }

    public static void main(String[] args) {

        SS sorter = new SS();

        int[] arr = {7, 12, 9, 11, 3};
        System.out.println("Original Array: ");
        for (int n : arr) {
            System.out.println(n);
        }
        
        sorter.selectionSort(arr);

        System.out.println("Sorted Array: ");
        for (int n : arr) {
            System.out.println(n);
        }
    }
}
