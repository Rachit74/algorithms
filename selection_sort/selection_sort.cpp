#include <iostream>
#include <vector>

using namespace std;

/*
in selection sort we sort the list by selecting parts of list, we do not iterte the part that is already sorted
and sort through the rest of array.

we set one index(i) to zero and compare rest of the elements of the array to that index to find the minimum value
in the array. then the minimum value is ignored and not iterated in the next loop run, next index (i+1) is set as
the new minimum index.
*/

void selectionSort(vector <int>& vec) {
    int n = vec.size();
    int min_index;
    for (int i=0;i<n-1;i++){
        min_index = i; //set min index to the current index of outer loop
        for (int j=i+1;j<n;j++) {
            if (vec[j]<vec[min_index]){
                min_index=j;// if current element is smaller than the "considered" smallest element
            };
        };

        if (min_index != i) {
            swap(vec[i],vec[min_index]); //swap if min index is not equal to the index of loop
        };
    };
};

int main() {

    vector <int> vec;
    vec = {5,3,7,4,2};

    selectionSort(vec);

    for (int i=0;i<vec.size();i++) {
        cout << vec[i] << " ";
    };
    cout << "\n";

    return 0;
};