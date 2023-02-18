#include <stdio.h>

int main(){
    char *arr1 = "Hello";
    char arr2[] = "Hello";
    char arr3[] = {'H','e','l','l','o'};
    printf("字符串常量的地址为:%p\n",arr1);
    printf("字符串数组的地址为:%p\n",arr2);
    printf("字符串数组的地址为:%p\n",arr3);
    return 0;
}
