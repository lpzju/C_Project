#include <stdio.h>
// 直接替换类型，注意是直接字符串类型
#define STR(s) #s
// 连接类型，拼完后可以是数字，也可以是变量
#define SSS(x,y) x ## y
// gcc不支持#@,VC支持
#define ZIFU(c) #@c

int main(){
    // STR使用的情况
    printf("%s\n",STR(HELLO));
    printf("%d\n",SSS(2,50));
    // printf("%s\n",SSS("Hello,"," World!"));
    int i9 = 10;
    printf("i9 = %d\n",SSS(i,9));
    char ch = 'c';
    // 报错
    printf("%c\n",ZIFU(a));
    return 0;
}
