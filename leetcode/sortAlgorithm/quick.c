//
// Created by liupeng on 2023/3/10.
//

#include <stdio.h>

void quickSort(int *arr, int left, int right) {
    // 想清楚思路再动笔
    // 首先，单次的排序中，left往右，right往左，直到碰见给定的值，比如取中间值arr[4]=6
    // 那么左边第一次是在2的位置，即arr[2]=7，同理，右边是arr[8]=3处，交换两数
    // 然后是arr[4]=6，与arr[7]=0，进行交换
    // 再然后是left=5,right=6
    // 最后left和right出局
    int pivot = arr[left+(right-left)/2];
    while (left < right) {
        while (arr[left] < pivot) {
            left++;
        }
        while (arr[right] > pivot) {
            right--;
        }
        if (left <= right) {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }
    }
    printf("%d %d\n",left,right);
}

void printArr(int *arr, int length) {
    for (int i = 0; i < length; i++) {
        printf("%d,",arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {4,2,7,5,6,1,9,0,3,8};
    quickSort(arr,0,9);
    printArr(arr,10);
    return 0;
}

