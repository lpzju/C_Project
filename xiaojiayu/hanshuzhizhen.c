#include <stdio.h>

int add(int,int);
int sub(int,int);
int calculate(int (* fp)(int,int),int,int);
//函数指针作为返回值的时候，注意他的函数名
int (*select(char))(int,int); // select首先是一个函数，然后返回一个指针
// 除去这一层之后，相当于 int (*)(int,int) ,即返回了一个指针

int main(){
    int (*func)(int,int);
    func = add;
    int n = 3;
    int m = 5;
    char op1 = '+';
    char op2 = '-';
    printf("函数是一个地址");
    printf("%d + %d = %d\n",n,m,func(n,m));
    printf("函数指针作为一个参数");
    printf("%d - %d = %d\n",n,m,calculate(sub,n,m));
    printf("函数指针作为返回值");
    int (*pp)(int,int);
    pp = select(op1);
    printf("%d + %d = %d\n",n,m,pp(n,m));
    return 0;
}
int add(int a,int b){
    return a + b;
}
int sub(int a,int b){
    return a + b;
}
int calculate(int (* fp)(int,int),int a,int b){
    return (* fp)(a,b);
}
int (*select(char ch))(int,int){
    //方式1
    // switch (ch) {
    //     case '+':
    //         return add;
    //     case '-':
    //         return sub;
    //     default:
    //         return NULL;
    // }
    //方式2
    if (ch == '+') {
        return add;
    }else if (ch == '-') {
        return sub;
    }else{
        return NULL;
    }
} 
