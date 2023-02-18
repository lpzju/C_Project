#include <stdio.h>

void func(void);

int main(){
    extern int count;
    printf("In main, count is %d\n",count);
    count++;
    printf("In main, count is %d\n",count);
}

int count;

void func(void){
    count++;
    printf("In func, count is %d\n",count);
}
