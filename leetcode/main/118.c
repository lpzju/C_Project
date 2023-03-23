/**
 * Created by lpzju on 2023/3/14 15:12
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** generate(int numRows, int* returnSize, int** returnColumnSizes){
    *returnSize = numRows;
    int **res = (int **) malloc(sizeof(int *) * numRows);
    *returnColumnSizes = (int *) malloc(sizeof(int) * numRows);
    for (int i = 0; i < numRows; i++) {
        int temp = i + 1;
        res[i] = (int *) malloc(sizeof(int) * temp);
        returnColumnSizes[0][i] = temp;
        for (int j = 0; j < temp; j++) {
            if (j == 0 || j == i) {
                res[i][j] = 1;
            } else if (i > 0) {
                res[i][j] = res[i-1][j-1] + res[i-1][j];
            }
        }
    }
    return res;
}

int** generate1(int numRows, int* returnSize, int* returnColumnSizes){
    *returnSize = numRows;
    int **res = (int **) malloc(sizeof(int *) * numRows);
    returnColumnSizes = (int *) malloc(sizeof(int) * numRows);
    for (int i = 0; i < numRows; i++) {
        int temp = i + 1;
        res[i] = (int *) malloc(sizeof(int) * temp);
        returnColumnSizes[i] = temp;
        for (int j = 0; j < temp; j++) {
            if (j == 0 || j == i) {
                res[i][j] = 1;
            } else if (i > 0) {
                res[i][j] = res[i-1][j-1] + res[i-1][j];
            }
        }
    }
    return res;
}

int main() {
////    cout << "Let's start to solve a new problem!" << endl;
////     printf("Let's start to solve a new problem!\n");
////    // 给定一个非负整数numRows，生成杨辉三角的前numRows行
////    // 例如numRows = 5，输出二维数组 [[1],[1,1],[1,2,1][1,3,3,1],[1,4,6,4,1]]
//    int numRows = 5;
//    int nums[5][5] = {0};
////
//    // 杨辉三角
//    for (int i = 0; i < numRows; i++) {
//        for (int j = 0; j < numRows; j++) {
//            if (i == j) {
//                nums[i][j] = 1;
//            }
//            if (j < numRows-1 && i > 0) {
//                nums[i][j] = nums[i-1][j-1] + nums[i-1][j];
//            }
//        }
//    }
//
//    // 打印
//    for (int i = 0; i < numRows; i++) {
//        for (int j = 0; j < numRows; j++) {
//            printf("%d ",nums[i][j]);
//        }
//        printf("\n");
//    }
    int numRows = 5;
    int temp1 = 0;
    int temp2 = 0;
    int *returnSize = &temp1;
    int *temp3 = &temp2;
    int **returnColumnSizes = &temp3;
    int temp4 = 0;
    int *temp5 = &temp4;
    int **res = &temp5;
//    res = generate(numRows,returnSize,returnColumnSizes);
    res = generate1(numRows,returnSize,temp3);
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d,",res[i][j]);
        }
        printf("\n");
    }

    return 0;
}