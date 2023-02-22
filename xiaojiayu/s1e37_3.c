#include <stdio.h>
#include <stdlib.h>

int main(){
    // 求本机器的最大内存
    // 按照100MB来进行计算
    size_t temp = 100 * 1024 * 1024;
    char *p = NULL;
    p = (char *) malloc (temp * sizeof(char));
    int count = 0;
    while(p != NULL){
        p = (char *) malloc (count * temp * sizeof(char));
        count++;
    }
    printf("%d\n",count);
    return 0;
}
