//给你一个正整数 n ，生成一个包含 1 到 n² 所有元素，且元素按顺时针顺序螺旋排列的 n x n 正方形矩阵 matrix 。
//
//
//
// 示例 1：
//
//
//输入：n = 3
//输出：[[1,2,3],[8,9,4],[7,6,5]]
//
//
// 示例 2：
//
//
//输入：n = 1
//输出：[[1]]
//
//
//
//
// 提示：
//
//
// 1 <= n <= 20
//
//
// Related Topics 数组 矩阵 模拟 👍 970 👎 0

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
//leetcode submit region begin(Prohibit modification and deletion)


/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** generateMatrix(int n, int* returnSize, int** returnColumnSizes){
    // C语言真恶心
    *returnSize = n;
    int **res = (int **) malloc (sizeof(int *) * n);
    for (int i = 0; i < n; i++) {
        res[i] = (int *) malloc (sizeof(int) * n);
        memset(res[i], 0, sizeof(int) * n);
        returnColumnSizes[0][i] = n;
    }
    int rounds = n / 2;
    int num = 1;
    for (int round = 0; round < rounds; round++) {
        int end = n - 1 - round;
        for (int top = round; top < end; top++) {
            res[round][top] = num++;
        }
        for (int right = round; right < end; right++) {
            res[right][end] = num++;
        }
        for (int bottom = end; bottom > round; bottom--) {
            res[end][bottom] = num++;
        }
        for (int left = end; left > round; left--) {
            res[left][round] = num++;
        }
    }
    if(n % 2 == 1) {
        res[rounds][rounds] = num;
    }
    return res;
}
//leetcode submit region end(Prohibit modification and deletion)

int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int length = sizeof(arr)/sizeof(arr[0]);
    printf("Hello leetcode\n");
    int temp1 = 0;
    int temp2 = 0;
    int *returnSize = &temp1;
    int *temp3 = &temp2;
    int **returnColumnSizes = &temp3;
    int temp4 = 0;
    int *temp5 = &temp4;
    int **res = &temp5;
    res = generateMatrix(3,returnSize,returnColumnSizes);
//    printf("%d",res[0][0]);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%5d", res[i][j]);
        }
        printf("\n");
        printf("\n");
    }
    return 0;
}