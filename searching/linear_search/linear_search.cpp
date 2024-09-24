#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
searches for a targert through a sorted array element by element
*/

void linearSearch(vector<int> arr, int target) {
    int flag = 0;
    int index;
    for (int i = 0; i<arr.size(); ++i) {
        if (arr[i] == target) {
            flag = 1;
            index = i;
            break;
        }
    }

    if (flag == 1) {
        cout << "Target Found at Index " << index << "\n";
    } else {
        cout << "Target not found\n";
    }
}

int main() {
    vector<int> arr = {5,7,2,3,8,9,1};
    
    // sort array
    auto first = arr.begin();
    auto last = arr.end();

    sort(first, last);

    cout << "Sorted Array: ";
    for (int i = 0; i<arr.size(); ++i) {
        cout << arr[i];
    }
    cout << "\n";

    linearSearch(arr, 5);
    linearSearch(arr, 55);
    return 0;
}