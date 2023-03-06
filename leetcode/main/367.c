#include <stdio.h>
#include <math.h>

bool isPerfectSqure(int num){
    // 方法1.先用数学方法，求exp(log(x)/2)，得到一个正整数，再进行比较
    int temp = (int)exp(0.5 * log(num));
    if (temp) {
        return true;
    } else {
        return false;
    }
}

int main() {
    // 给定正整数n，如果是完全平方数，则返回true，否则返回false
    int num;
    scanf("%d",&num);
    printf("%d\n",isPerfectSqure(num));
    return 0;
}
