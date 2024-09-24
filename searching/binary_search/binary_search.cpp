#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void binarySearch(const vector<int>& arr, int target, int low, int high) {
    if (low > high) {
        cout << "Element not found\n";
        return; // return to stop further execution
    }

    int middle = low + (high - low) / 2;

    if (arr[middle] == target) {
        cout << "Element found at index " << middle << "\n";
    } else if (target > arr[middle]) {
        binarySearch(arr, target, middle + 1, high); // Recur in the right half
    } else {
        binarySearch(arr, target, low, middle - 1); // Recur the left half
    }
}

int main() {
    vector<int> arr = {34, 7, 23, 32, 5, 62, 45, 12, 78, 1, 90, 15, 27, 3, 56, 8, 19, 41, 50, 11};
    auto first = arr.begin();
    auto last = arr.end();
    
    // sort array
    sort(first, last);

    // Print sorted array
    cout << "Sorted Array: ";
    for (int i = 0; i < arr.size(); ++i) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    binarySearch(arr, 78, arr[0], arr.size() - 1);
    binarySearch(arr, 999, arr[0], arr.size() - 1);


    return 0;
}
