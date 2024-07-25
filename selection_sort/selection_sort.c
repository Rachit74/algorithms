#include <stdio.h>


void swap(int *a,int *b) { // call be refrence
    int temp;
    temp = *a;
    *a=*b;
    *b=temp;
}

void selectionSort(int arr[], int n) {
    int min_index;
    int temp;
    for (int i=0;i<n;i++) {
        min_index=i;
        for (int j=i+1;j<n;j++) {
            if (arr[j]<arr[min_index]){
                min_index=j;
            };
        };
    if (min_index != i) {
        swap(&arr[i],&arr[min_index]);
    };
    };
}

int main(){

    int arr[5] = {5,2,4,1,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    selectionSort(arr,n);

    for (int i=0;i<n;i++) {
        printf("%d ", arr[i]);
    };
    printf("\n");

    return 0;
}