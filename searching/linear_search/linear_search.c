#include <stdio.h>

int linearSearch(int arr[], int size) {
    int target;
    printf("Enter Target: ");
    scanf("%d",&target);
    for (int i=0;i<size;i++) {
        if (arr[i] == target) {
            return i;
        };
    };
    return -1;
}

int main() {
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr)/sizeof(arr[0]);

    printf("%d ", linearSearch(arr,size));

}