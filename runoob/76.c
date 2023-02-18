#include <stdio.h>

double even(int n){
    double res = 0.;
    int i ;
    for (i = 2; i <= n ; i = i + 2) {
        res += 1./i;
    }
    return res;
}
double odd(int n){
    double res = 0.;
    int i ;
    for (i = 1; i <= n ; i = i + 2) {
        res += 1./i;
    }
    return res;
}

int main(){
    // 编写一个指针函数，当n为偶数时，指针函数指向函数1，奇数时指向函数2
    // 函数偶数时，1/2+1/4+...+1/n 
    // 函数奇数时，1/1+1/3+...+1/n
    int i;
    scanf("%d",&i);
    double (*func)(int);
    if (i % 2) {
        func = odd; 
    }else{
        func = even;
    }
    printf("%lf\n",(*func)(i));
}
