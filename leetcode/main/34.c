/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdio.h>
#include <stdlib.h>

int* searchRange(int* nums, int numsSize, int target, int* returnSize){
    // 先来个暴力解决
    int *arr = (int *) malloc (2 * sizeof(int));
    int left = -1;
    int right = -1;
    if (numsSize == 0) {
        *returnSize = 0;
    } else {
        int i;
        for (i = 0; i < numsSize; i++) {
            if (nums[i] == target) {
                left = i;
                break;
            }
        }
        for (i = 0; i < numsSize; i++) {
            if (nums[i] == target) {
                right = i;
            }
        }
    }
    arr[0] = left;
    arr[1] = right;
    return arr;
}

int main() {
    // int p[] = {5,7,7,8,8,10};
    int p[] = {0,0,0,0,0,0};
    int numsSize = 0;
    int res = 0;
    int target;
    scanf("%d",&target);
    int *re;
    re = searchRange(p,numsSize,target,&res);
    printf("%d %d\n",re[0],re[1]);
    return 0;
}
