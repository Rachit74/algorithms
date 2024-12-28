// Insertion Sort

public class IS {

    public void insertionSort(int[] arr) {
        int n = arr.length;

        for (int i = 1; i < n; i ++) {
            int temp = arr[i];
            int j = i-1;
            while (j>=0 && arr[j]>temp) {
                arr[j+1] = arr[j];
                j--;
            }
            arr[j+1] = temp;
        }
    }

    public static void main(String[] args) {
        IS sorter = new IS();

        int[] arr = {9,7,5,8,6,3,2,1};

        sorter.insertionSort(arr);
        for(int i:arr) {
            System.err.println(i);
        }
        
    }    
}
