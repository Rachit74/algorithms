#include <iostream>
#include <vector>

using namespace std;

void bubbleSort(vector <int>& vec) {
    int temp;
    int n = vec.size();
    
    for (int i=0;i<n-1;i++) { // we run outer loop n-1 times instead of n because that will add an extra phase of sorting
        for (int j=0;j<n-i-1;j++) { // we run inner loop n-i-1 times to prevent sorting out of bounds
            if (vec.at(j)>vec.at(j+1)) {
                /*
                mannual swapping by making an temp variable
                temp = vec.at(j);
                vec.at(j) = vec.at(j+1);
                vec.at(j+1) = temp;
                */

                //std::swap can be used instead
                swap(vec.at(j),vec.at(j+1));
            };
        };
    };
};

int main() {

    vector <int> vec;
    vec = {1,3,2,5,4};

    bubbleSort(vec);
    for (int i=0;i<vec.size();i++) {
        cout << vec.at(i);
    };
    cout << "\n";

    return 0;
};