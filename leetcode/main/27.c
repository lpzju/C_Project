#include <stdio.h>

// int removeElement(int *nums, int numsSize, int val) {
//     int i;
//     for (i = 0; i < numsSize; i++) {
//         if (nums[i] == val) {
//             int j;
//             for (j = i; j < numsSize-1; j++){
//                 nums[j] = nums[j+1];
//             }
//             i = i - 1;
//             numsSize--;
//         }
//     }
//     return numsSize;
// }
int removeElement(int *nums, int numsSize, int val) {
    // 使用双指针法
    int fast = 0;
    int low = 0;
    int result = 0;
    for (fast = 0; fast < numsSize; fast++) {
        if (nums[fast] != val) {
            nums[low++] = nums[fast];
            result++;
        } 
    }
    return result;
}

int main() {
    int arr[] = {0,1,2,2,3,0,4,2};
    int val = 2;
    printf("%d\n",removeElement(arr,8,2));
    for(int i = 0; i<8;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}

