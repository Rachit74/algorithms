// Linear search

public class LS {
    public int linearSearch(int[] arr, int target) {
        int n = arr.length;
        for (int i = 0; i<n; i++) {
            if (arr[i] == target) {
                return i;
            }
        }
        
        return 0;
    }
    public static void main(String[] args) {
        LS searcher = new LS();
        int[] arr = {10,45,78,34,56,34,67,87,45};
        int res = searcher.linearSearch(arr, 87);
        if (res != 0) {
            System.out.println("Target found at index " + res);
        } else {
            System.out.println("Target not found in the given array");
        }
    }
}
