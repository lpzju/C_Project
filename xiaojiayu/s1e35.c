#include <stdio.h>
#include <math.h>

int main(){
    // 递归解决安排问题
    // 描述如下：有2^n(n <= 6)个球队进行单循环比赛，计划在2^n-1天内完成
    // 每个对每天进行一场比赛，设计一个比赛安排，使2^n-1天内每个对都与不同对手比赛
    // 比如
    /*
    * 1 2 3 4
    * 2 1 4 3
    * 3 4 1 2
    * 4 3 2 1
    */
    // 1.尝试自己的方法，不用递归
    int number;
    printf("请输入一个小于等于6的数:\n");
    scanf("%d",&number);
    int total = pow(2,number);
    int i, j;
    printf("编 号\t");
    for (i = 1; i < total; i++){
        if (i == total -1) {
            printf("第%d天\n",i);
        }else {
            printf("第%d天\t",i);
        }
    }
    int arr[total][total];
    for (i = 0; i < total; i++) {
        arr[0][i] = i + 1;
    }
    for (i = 1; i < total; i++) {
        for (j = 0; j < total; j++) {
            if (i % 2) {
                if (j % 2) {
                    arr[i][j] = arr[i-1][j-1];
                } else {
                    arr[i][j] = arr[i-1][j+1];
                }
            } else {
                arr[i][j] = j + 1;
            }
        }
    }

    // 打印
    for (i = 0; i < total; i++) {
        for (j = 0; j < total; j++) {
            if (j == total - 1) {
                printf("%3d\n",arr[i][j]);
            } else {
                printf("%3d\t",arr[i][j]);
            }
        }
    }
    return 0;
}
