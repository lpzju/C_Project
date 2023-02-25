#include <stdio.h>
#include <stdlib.h>

int main(){
    // 用户每输入一个数字，调用一次realloc
    int count, number;
    count = number = 0;
    int *ptr = NULL;
    printf("%d %d\n", count, number);
    do {
        scanf("%d",&number);
        ptr = (int *) realloc (ptr, count * sizeof(int));
        ptr[count] = number;
        count++;
    } while(number != -1);
    // 打印
    int *tmp = ptr;
    while(*tmp){
        printf("%d, ",*tmp);
        tmp++;
    }
    return 0;
}
