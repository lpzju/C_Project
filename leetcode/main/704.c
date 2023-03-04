#include <stdio.h>

// int search(int* nums, int numsSize, int target){
//     int i;
//     int flag = -1;
//     for(i = 0; i < numsSize; i++) {
//         if(nums[i] == target) {
//             flag = i;
//             break;
//         }
//     }
//     return flag;
// }

// 使用二分法减小时间复杂度
int search(int *nums, int numsSize, int target) {
    int flag = -1;
    int left = 0;
    int middle;
    int right = numsSize - 1;
    while (left <= right) {
        middle = (left+right)/2;
        if (nums[middle] == target) {
            flag = middle;
            break;
        } else if (nums[middle] < target) {
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    }
    return flag;
}

int main() {
    int arr[] = {1,2,3,5,7,8,9,10,11};
    int length = 9;
    int num;
    scanf("%d",&num);
    printf("%d\n",search(arr,length,num));
    return 0;
}
