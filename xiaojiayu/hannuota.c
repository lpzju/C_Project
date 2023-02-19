#include <stdio.h>

void move(char, char, char, int);

int total = 1;

int main(){
    // 汉诺塔
    // 第一步，将63个圆盘从A移动到B
    // 第二步，将A最下面的圆盘从A移动到C
    // 第三步，将63个圆盘从B移动到C
    int n;
    printf("汉诺塔游戏，将从A移动到C\n");
    printf("请输入你想玩汉诺塔的层数:\n");
    scanf("%d",&n);
    char ori = 'A';
    char dest = 'C';
    char temp = 'B';
    move(ori, dest, temp, n);
    return 0;
}

void move(char ori, char dest, char temp, int n){
    // 以从A移动3个到C为例
    // n为1，则直接将ori移动到dest
    // n不为1，那么ori、dest、temp要变的，这个没想到很难debug
    if(n != 1){
        move(ori, temp, dest, n-1);
        move(ori, dest, temp, 1);
        move(temp, dest, ori, n-1);
    }else{
        printf("第%d次，将%c移动到%c\n", total, ori, dest);
        total++;
    }
}
