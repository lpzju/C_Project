#include <stdio.h>

int minSubArrayLen (int target, int *nums, int numsSize) {
    int i, j;
    int temp = numsSize+1;
    for (i = 0; i < numsSize; i++) {
        int total = 0;
        int len = 0;
        for (j = i; j < numsSize; j++) {
            total += nums[j];
            ++len;
            if (total >= target) {
                temp = temp <= len ? temp : len;
                break;
            }
        }
    }
    return temp == numsSize+1 ? 0 : temp;
}

int main() {
    int nums1[6] = {2,3,1,2,4,3};
    int nums2[3] = {1,4,4};
    int nums3[8] = {1,1,1,1,1,1,1,1};
    printf("%d\n",minSubArrayLen(11,nums3,8));
    return 0;
}
