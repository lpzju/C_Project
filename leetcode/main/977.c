#include <stdio.h>
#include <stdlib.h>

int comp(const void *a,const void *b) {
    return *(int *)a - *(int *)b;
}

int *sortedSqures(int *nums, int numsSize) {
    // 先用暴力实现有序数组平方排序
    int *arr = (int *) malloc (numsSize * sizeof(int));
    int i;
    for (i = 0; i< numsSize; i++) {
        arr[i] = nums[i] * nums[i];
    }
    qsort(arr, numsSize, sizeof(int), comp);
    return arr;
}

int main() {
    int nums[5] = {-4,-1,0,3,10};
    // int *p = NULL;
    // p = sortedSqures(nums, 5);
    // for (int i = 0; i < 5; i++) {
    //     printf("%d\n",p[i]);
    // }
    // 使用双指针法实现，这样时间复杂度会变为O(n)
    int arr[5] = {0};
    int left = 0;
    int right = 4;
    int k = 4;
    while (k > 0) {
        if ((long)(nums[left]*nums[left]) > (long)(nums[right]*nums[right])) {
            arr[k--] = nums[left] * nums[left];
            left++;
        } else {
            arr[k--] = nums[right] * nums[right];
            right--;
        }
    }
    for (int i = 0; i < 5; i++) {
        printf("%d,",arr[i]);
    }
    printf("\n");
    return 0;
}
