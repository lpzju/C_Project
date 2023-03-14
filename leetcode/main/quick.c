#include <stdio.h>

void quickSort(int *arr, int left, int right) {
    int pivot = arr[left+(right-left)/2];
    int i = left;
    int j = right;
    while (i <= j)
    {
        while (arr[i] < pivot) {
            i++;
        }
        while (arr[j] > pivot) {
            j--;
        }
        if (i <= j) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }
    if (left <= j)
    {
        quickSort(arr,left,j);
    }
    
    if (i <= right)
    {
        quickSort(arr,i,right);
    }
    
    
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