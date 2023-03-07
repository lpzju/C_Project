#include <stdio.h>

void moveZeros(int *nums, int numsSize) {
    // int i = 0;
    // int j;
    // for (i = 0; i < numsSize-1; i++) {
    //     if (nums[i] == 0) {
    //         for (j = i; j < numsSize-1; j++) {
    //             nums[j] = nums[j+1];
    //         }
    //         nums[numsSize-1] = 0;
    //         numsSize--;
    //         i = i - 1;
    //     }
    // }
    // 双指针再做一遍
    int i = 0;
    int j = 0;
    for (j = 0; j < numsSize; j++) {
        if (nums[j] != 0) {
            nums[i++] = nums[j];
        }
    }
    while (i < numsSize) {
        nums[i] = 0;
        i++;
    }
}

int main(){
    int nums[] = {0,0,1,0,3,12};
    int len = 6;
    moveZeros(nums, len);
    for(int i = 0; i < 6; i++) {
        printf("%d ",nums[i]);
    }
    return 0;
}
