//给定一个整数数组 temperatures ，表示每天的温度，返回一个数组 answer ，其中 answer[i] 是指对于第 i 天，下一个更高温度出现
//在几天后。如果气温在这之后都不会升高，请在该位置用 0 来代替。 
//
// 
//
// 示例 1: 
//
// 
//输入: temperatures = [73,74,75,71,69,72,76,73]
//输出: [1,1,4,2,1,1,0,0]
// 
//
// 示例 2: 
//
// 
//输入: temperatures = [30,40,50,60]
//输出: [1,1,1,0]
// 
//
// 示例 3: 
//
// 
//输入: temperatures = [30,60,90]
//输出: [1,1,0] 
//
// 
//
// 提示： 
//
// 
// 1 <= temperatures.length <= 10⁵ 
// 30 <= temperatures[i] <= 100 
// 
//
// Related Topics 栈 数组 单调栈 👍 1425 👎 0

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
//leetcode submit region begin(Prohibit modification and deletion)


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* dailyTemperatures(int* temperatures, int temperaturesSize, int* returnSize){
    // 暴力解法
    int i, j;
    *returnSize = temperaturesSize;
    int *arr = (int *) malloc (temperaturesSize * sizeof(int));
    for (i = 0; i < temperaturesSize-1; i++) {
        int flag = 1;
        for (j = i+1; j < temperaturesSize; j++) {
            if (temperatures[j] > temperatures[i]) {
                arr[i] = flag;
                break;
            } else {
                flag++;
            }
            arr[i] = 0;
        }
    }
    arr[temperaturesSize-1] = 0;
    return arr;
}
//leetcode submit region end(Prohibit modification and deletion)

int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int length = sizeof(arr)/sizeof(arr[0]);
    printf("Hello leetcode\n");
    return 0;
}