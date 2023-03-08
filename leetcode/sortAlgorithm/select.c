#include <stdio.h>

void selectSort(int *arr, int length) {
    int i, j;
    for (i = 0; i < length-1; i++) {
        int min = arr[i];
        int pos = i;
        for (j = i; j < length; j++) {
            if (arr[j] < min) {
                min = arr[j];
                pos = j;
            }
        }
        int temp;
        temp = arr[pos];
        arr[pos] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int arr[10] = {0,5,3,7,9,8,2,1,4,6};
    selectSort(arr,10);
    for (int i = 0; i < 10; i++) {
        printf("%d,",arr[i]);
    }
    printf("\n");
    return 0;
}
