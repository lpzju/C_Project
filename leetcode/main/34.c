/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdio.h>
#include <stdlib.h>

// int* searchRange(int* nums, int numsSize, int target, int* returnSize){
//     // 先来个暴力解决
//     int *arr = (int *) malloc (2 * sizeof(int));
//     int left = -1;
//     int right = -1;
//     if (numsSize == 0) {
//         *returnSize = 0;
//     } else {
//         int i;
//         for (i = 0; i < numsSize; i++) {
//             if (nums[i] == target) {
//                 left = i;
//                 break;
//             }
//         }
//         for (i = 0; i < numsSize; i++) {
//             if (nums[i] == target) {
//                 right = i;
//             }
//         }
//     }
//     arr[0] = left;
//     arr[1] = right;
//     return arr;
// }
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int searchRange(int* nums, int numsSize, int target, int* returnSize){
    // 使用二分，查找出左边边界，再查找右边边界
    *returnSize = 2;
    int *arr = (int *) malloc (2 * sizeof(int));
    int left = 0;
    int flag = -1;
    int right = numsSize - 1;
    while (left <= right) {
        int middle = left + ((right - left) / 2);
        if (nums[middle] > target) {
            right = middle - 1;
        } else {
            left = middle + 1;
            flag = left;
        }
    }
    return flag;
}

int main() {
    int p[] = {5,7,7,8,8,10};
    // int p[] = {0,0,0,0,0,0};
    int numsSize = 6;
    int res = 0;
    int target;
    scanf("%d",&target);
    int *re;
    // re = searchRange(p,numsSize,target,&res);
    int result;
    result = searchRange(p,numsSize,target,&res);
    printf("%d\n",result);
    return 0;
}
