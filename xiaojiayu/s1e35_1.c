#include <stdio.h>

int arr[65][65];

int set(int, int);

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
    // 递归解决问题
    int number;
    printf("请输入一个整数:\n");
    scanf("%d",&number);
    set(1, number);
    // 打印
    int i, j;
    for (i = 1; i <= number; i++) {
        for (j = 1; j <= number; j++) {
            printf("%3d\t",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

int set(int begin, int number) {
    if (number == 2) {
        arr[begin][1] = begin;
        arr[begin][2] = begin + 1;
        arr[begin+1][1] = begin + 1;
        arr[begin+1][2] = begin;
        return 0;
    }
    set(begin, number/2);
    set(begin+number/2,number/2);
    int i, j;
    for (i = begin+number/2; i < begin+number; i++) {
        for (j = number/2+1;j<=number;j++) {
            arr[i][j] = arr[i-number/2][j-number/2];
        }
    }
    for (i = begin; i < begin+number/2; i++) {
        for (j = number/2+1;j<=number;j++) {
            arr[i][j] = arr[i+number/2][j-number/2];
        }
    }

}
