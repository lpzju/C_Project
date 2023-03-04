#include <stdio.h>

int searchInsert(int* nums, int numsSize, int target){
    // 请必须使用时间复杂度为 O(log n) 的算法。
    // 很明显这里要求使用二分
    int left = 0;
    int middle;
    int flag = -1;
    int right = numsSize - 1;
    while (left <= right) {
        middle = (left + right) / 2;
        if (nums[middle] == target) {
            flag = middle;
            break;
        } else if (nums[middle] < target) {
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    }
    if (flag == -1) {
        // if (nums[middle] < target) {
        //     flag = middle + 1;
        // } else {
        //     flag = middle;
        // }
        flag = nums[middle] < target ? middle + 1 : middle;
    }
    // printf("middle:%d\n",middle);
    // return flag;
    return right + 1;
}

int main(){
    int arr[] = {1,2,3,5,8,9,11,15,19};
    int len = 9;
    int number;
    scanf("%d",&number);
    printf("%d\n",searchInsert(arr,len,number));
    return 0;
}
