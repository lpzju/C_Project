#include <stdio.h>

int fib(int n);
int factorial(int n);

int main(){
    // 递归
    int n = 5;
    printf("%d的阶乘是%d\n",n,factorial(n));
    printf("%d的非伯纳切值是%d\n",n,fib(n));
    return 0;
}

int fib(int n){
    if (n == 1 || n == 2) {
        return 1;
    }else{
        return fib(n - 1) + fib(n - 2);
    }
}

int factorial(int n){
    if (n == 1) {
        return 1;
    }else{
        return n * factorial(n -1);
    }
}
