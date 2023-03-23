/**
 * Created by lpzju on 2023/3/19 19:07
 */
#include <stdio.h>

void cocktailSort(int *arr, int length) {
    int left = 0;
    int right = length - 1;
    int temp;
    int i, j;
    while (left < right) {
        for (i = left; i < right; i++) {
            if (arr[i] > arr[i+1]) {
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        right--;
        for (j = right; j > left; j--) {
            if (arr[j] < arr[j-1]) {
                temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
        }
        left++;
    }
}

int main() {
//    cout << "Let's start to solve a new problem!" << endl;
     printf("Let's start to solve a new problem!\n");
    int arr[10] = {0,5,3,7,9,8,2,1,4,6};
    cocktailSort(arr,10);
    for (int i = 0; i < 10; i++) {
        printf("%d,",arr[i]);
    }
    printf("\n");
    return 0;
}