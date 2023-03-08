#include <stdio.h>

void bubbleSort(int *arr, int length) {
    int i, j;
    for (i = 0; i < length-1; i++) {
        for (j = 0; j < length-i-1; j++) {
            if (arr[j] >= arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int arr[10] = {0,5,3,7,9,8,2,1,4,6};
    bubbleSort(arr,10);
    for (int i = 0; i < 10; i++) {
        printf("%d,",arr[i]);
    }
    printf("\n");
    return 0;
}
