#include <stdio.h>

int minSubArrayLen (int target, int *nums, int numsSize) {
    // int i, j;
    // int temp = numsSize+1;
    // for (i = 0; i < numsSize; i++) {
    //     int total = 0;
    //     // int len = 0;
    //     for (j = i; j < numsSize; j++) {
    //         total += nums[j];
    //         // ++len;
    //         if (total >= target) {
    //             int len = j - i + 1;
    //             temp = temp < len ? temp : len;
    //             break;
    //         }
    //     }
    // }
    // return temp == numsSize+1 ? 0 : temp;
    // 双指针减小时间复杂度
    int i = 0;
    int sum = 0;
    int j;
    int subLen = numsSize+1;
    printf("%d\n",target);
    for (j = 0; j < numsSize; j++) {
        printf("sum:%d,",sum);
        sum += nums[j];
        printf("sum:%d,",sum);
        while (sum >= target) {
            int temp = j - i + 1;
            subLen = subLen < temp ? subLen : temp;
            printf("\nsum:%d\n",sum);
            sum -= nums[i];
            i++;
        }
    }
    printf("\n");
    return subLen == numsSize+1 ? 0 : subLen;
}

int main() {
    int nums1[6] = {2,3,1,2,4,3};
    int nums2[3] = {1,4,4};
    int nums3[8] = {1,1,1,1,1,1,1,1};
    int nums4[10] = {5,1,3,5,10,7,4,9,2,8};
    printf("%d\n",minSubArrayLen(15,nums4,10));
    return 0;
}
