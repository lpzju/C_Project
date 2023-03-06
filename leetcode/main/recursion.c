#include <stdio.h>

int pow1(int, int);

int main() {
    // 递归来计算x的n次幂，要求时间复杂度为logn
    int x = 3;
    int num;
    scanf("%d",&num);
    printf("%d\n",pow1(x, num));
    return 0;
}

int pow1(int x, int n) {
    if (n == 0) {
        return 1;
    } 
    int temp = pow1(x, n/2);
    if (n % 2 == 1) {
        return temp * temp * x;
    } else {
        return temp * temp;
    }
}
