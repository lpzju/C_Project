//给定一个整数数组 nums 和一个整数目标值 target，请你在该数组中找出 和为目标值 target 的那 两个 整数，并返回它们的数组下标。 
//
// 你可以假设每种输入只会对应一个答案。但是，数组中同一个元素在答案里不能重复出现。 
//
// 你可以按任意顺序返回答案。 
//
// 
//
// 示例 1： 
//
// 
//输入：nums = [2,7,11,15], target = 9
//输出：[0,1]
//解释：因为 nums[0] + nums[1] == 9 ，返回 [0, 1] 。
// 
//
// 示例 2： 
//
// 
//输入：nums = [3,2,4], target = 6
//输出：[1,2]
// 
//
// 示例 3： 
//
// 
//输入：nums = [3,3], target = 6
//输出：[0,1]
// 
//
// 
//
// 提示： 
//
// 
// 2 <= nums.length <= 10⁴ 
// -10⁹ <= nums[i] <= 10⁹ 
// -10⁹ <= target <= 10⁹ 
// 只会存在一个有效答案 
// 
//
// 
//
// 进阶：你可以想出一个时间复杂度小于 O(n²) 的算法吗？ 
//
// Related Topics 数组 哈希表 👍 16521 👎 0

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
//leetcode submit region begin(Prohibit modification and deletion)
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int i, j;
    *returnSize = 2;
    int *temp = (int *) malloc (2 * sizeof(int));
    temp[0] = -1;
    temp[1] = -1;
    for (i = 0; i < numsSize-1; i++) {
        for (j = i+1; j < numsSize; j++) {
            if (nums[i]+nums[j] == target) {
                temp[0] = i;
                temp[1] = j;
                break;
            }
        }
    }
    return temp;
}
//leetcode submit region end(Prohibit modification and deletion)

int main() {
    int arr[] = {2,7,11,15};
    int length = sizeof(arr)/sizeof(arr[0]);
    printf("Hello leetcode\n");
    int p = 2;
    int *pp;
    pp = twoSum(arr,length,19,&p);
    printf("%d %d\n",pp[0],pp[1]);
    return 0;
}