#include <stdio.h>

char *print(char ch);

int main(int argc, char *argv[])
{
    // 指针函数
    printf("%s\n",print('a'));
    return 0;
}

char *print(char ch){
    switch (ch) {
        case 'a':return "aaa";
        case 'b':return "bbb";
        default:return "none";
    }
}
