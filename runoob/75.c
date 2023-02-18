#include <stdio.h>

void reverse(void){
    char ch = getchar();
    if (ch != '\n') {
        reverse();
    }
    if (ch == '\n') {

    }else{
        putchar(ch);
    }
}

int main(){ 
    // 先测试代码补全功能
    int i = 1;
    if (i == 1) {
        printf("%d\n",i);
    }
    // 输入一个数，将其反向输出
    // 这里假设用户输入的都是数字
    // 方式1，使用递归的方法
    reverse();
    printf("\n");
    // 方式2，数组记录一下
    int arr[1024];
    char ch;
    i = 0;
    while ((ch = getchar()) != '\n') {
        arr[i++] = ch;
    }
    printf("%d\n",i);
    int j;
    for (j = i-1;j >= 0;j--) {
        printf("%c ",arr[j]);
    }
    printf("\n");
    return 0;
}
