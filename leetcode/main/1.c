/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int i, j;
    for (i = 0; i < numsSize; i++) {
        for (j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                *returnSize = i;
                *(returnSize+1) = j;
            }
        }
    }
    return returnSize;
}

int main(){
    int arr[] = {3,2,4};
    int *nums = arr;
    int numsSize = 3;
    int target = 6;
    int *returnSize = (int *) malloc (sizeof(int) * 10);
    int *temp;
    temp = twoSum(nums,numsSize,target,returnSize);
    printf("%d %d\n",temp[0],temp[1]);
    return 0;
}
