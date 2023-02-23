#include <stdio.h>

int add(int value1, int value2){
    return value1 + value2;
}

void add2(int *p1,int *p2){
    *p1 += *p2;
}

void add3(int **p1,int **p2){
    **p1 -= **p2;
}

int main(){
    // 指针指针函数
    int num1 = 3;
    int num2 = 4;
    int res = add(num1,num2);
    printf("%d\n",res);
    // int res2 = add(&num1,&num2);
    // add2(&num1,&num2);
    int *t1 = &num1;
    int *t2 = &num2;
    add3(&t1,&t2);
    printf("%d %d\n",num1,num2);
    return 0;
}
