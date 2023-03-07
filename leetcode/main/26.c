#include <stdio.h>

int removeDuplicates(int *nums, int numsSize) {
    int left = 1;
    int right = 1;
    int total = 1;
    for (right = 1; right < numsSize; right++) {
        if (nums[right] == nums[right-1]) {
        } else {
            nums[left++] = nums[right];
            total++;
        }
    }
    return total;
}

int main() {
    int nums[] = {0,0,1,1,2,2,3,3,4};
    int len = 9;
    int res = removeDuplicates(nums, len);
    printf("%d\n",res);
    for (int i = 0; i < res; i++) {
        printf("%d ",nums[i]);
    }
    printf("\n");
    return 0;
}
