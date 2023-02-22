#include <stdio.h>
#include <stdlib.h>

int main(){
    // 内存分配
    char *temp = NULL;
    temp = (char *)malloc(6 * 1024LL * 1024 * 1024 * sizeof(char));
    printf("%d\n",temp == NULL);
    temp = (char *)malloc(5 * 1024LL * 1024 * 1024 * sizeof(char));
    printf("%d\n",temp == NULL);
    return 0;
}
