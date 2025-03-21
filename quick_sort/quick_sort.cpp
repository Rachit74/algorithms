#include <iostream>
#include <vector>
#include <algorithm>

int part(std::vector<int> &arr, int low, int high) {

    // set pivot to high
    int pivot = arr[high];

    // declare i to keep track of last smallest value
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            std::swap(arr[i], arr[j]);
        }
    }

    // set pivot before the smallest value
    std::swap(arr[i+1], arr[high]);

    // return the partition point
    return (i+1);
}

void quickSort(std::vector<int> &arr, int low, int high) {
    if (low < high) {
        int pi = part(arr, low, high);

        // seprate and sort elements before and after partition index
        quickSort(arr, low, pi-1);
        quickSort(arr, pi+1, high);
    }
}

int main() {
    std::vector<int> arr = {10, 7, 8, 9, 1, 5};
    int n = arr.size();
    
    quickSort(arr, 0, n - 1);

    for (auto i : arr) {
        std::cout << i << " ";
    }
    return 0;
}
