#include <stdio.h>
#include <stdlib.h>

// malloc的函数原型：void *malloc(size_t size);

int main(){
    int *p = (int *) malloc (4);
    printf("%d\n",sizeof(p));
    return 0;
}
