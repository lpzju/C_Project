#include <stdio.h>
#include <stdlib.h>

int main(){
    // 查看电脑所能分配的最大内存
    // 先以100MB为基准，试一下
    // 方式1，先分配再释放
    char *temp = NULL;
    int ori = 100;
    int count = 0;
    temp = (char *)malloc(1024LL * 1024 * 1024 * sizeof(char));
    printf("%p\n",temp);
    while(temp != NULL){
        temp = (char *)malloc(1024LL * 1024 * 1024 * sizeof(char));
        printf("count = %d\n",count);
        count++;
    }
    // temp = malloc(1024LL  * 1024 * 1024);
    printf("%d\n",temp == NULL);
    printf("%.2fGB\n", count * 1.0 * 10);
    return 0;
}
