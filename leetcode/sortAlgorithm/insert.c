#include <stdio.h>

void insertSort(int *arr, int length) {
    for (int i = 1; i < length; i++) {
        for (int j = i; j > 0; j--) {
            if (arr[j] <= arr[j-1]) {
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
        }
    }
}

int main() {
    int arr[10] = {0,5,3,7,9,8,2,1,4,6};
    insertSort(arr,10);
    for (int i = 0; i < 10; i++) {
        printf("%d,",arr[i]);
    }
    printf("\n");
    return 0;
}
