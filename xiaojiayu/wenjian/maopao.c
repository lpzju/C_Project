#include <stdio.h>
int main() {
    int arr[] = {4,3,6,8,1,2,5,9,7,0};
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9-i; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for (int i = 0; i < 10; i++) {
        printf("%d,",arr[i]);
    }
}