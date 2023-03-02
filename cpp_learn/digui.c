#include <stdio.h>
#include <stdlib.h>

int arr[65][65];

int set(int begin, int number);
void print(int number);

int main(){
    // 2^n个队伍比赛，分2^n-1天完成
    /*
    * 1 2 3 4
    * 2 1 4 3
    * 3 4 1 2
    * 4 3 2 1
    */
    int number;
    scanf("%d",&number);
    set(1, number);
    // 打印
    print(number);
    return 0;
}

int set(int begin, int number) {
    if (number == 2) {
        arr[begin][1] = begin;
        arr[begin][2] = begin+1;
        arr[begin+1][1] = begin+1;
        arr[begin+1][2] = begin;
        return 0;
    }
    set(begin, number/2);
    set(begin+number/2,number/2);
    int i, j;
    for (i = begin; i < begin+number/2;i++){
        for (j = 1+number/2; j <= number; j++){
            arr[i][j] = arr[i+number/2][j-number/2];
        }
    }
    for (i = begin+number/2; i <= begin+number;i++){
        for (j = 1+number/2; j <= number; j++){
            arr[i][j] = arr[i-number/2][j-number/2];
        }
    }
}

void print(int number) {
    int i, j;
    for (i = 1; i<= number; i++) {
        for (j = 1; j <= number ;j++) {
            printf("%3d",arr[i][j]);
        }
        printf("\n");
    }
}
