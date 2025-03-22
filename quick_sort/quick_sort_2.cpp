#include <iostream>
#include <vector>
#include <algorithm>


int partition(std::vector<int> &arr, int low, int high) {
    // choose first element as pivot
    int pivot = arr[low];
    
    // two pointers which will be moving inwards on the array swapping elements
    int i = low - 1; int j = high + 1;

    while (true) {
        do {i++;} while (arr[i] < pivot);
        do {j--;} while (arr[j] > pivot);

        if (i >= j) {
            return j;
        }

        std::swap(arr[i], arr[j]);

    }
}

void quickSort(std::vector<int> &arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi);
        quickSort(arr, pi+1, high);
    }
}

int main() {

    std::vector<int> arr = {10, 80, 30, 90, 40, 50, 70};

    int n = arr.size();

    quickSort(arr, 0, n-1);

    for (auto x: arr) {
        std::cout << x << " ";
    }

    return 0;
}