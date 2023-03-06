#include <stdio.h>
#include <math.h>

int mySqrt(int x) {
    // 暴力解发
    // int i;
    // if (x == 0) {
    //     return 0;
    // }
    // for (i = 1; i <= x/2 + 1; i++) {
    //     int temp = i + 1;
    //     if ((i*i <= x) && (temp*temp > x)) {
    //         return i;
    //     }
    // }
    // 直接使用指数和对数来进行计算
    // double temp = exp(0.5*log(x));
    // printf("%.2f\n",temp);
    // return (int)temp;
    // 使用二分法进行查找
    int left = 0;
    int right = x;
    int ans;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if ((long long)(mid * mid) > x) {
            right = mid - 1;
        } else {
            left = mid + 1;
            ans = mid;
        }
    }
    return ans;
}

int main() {
    int num;
    scanf("%d",&num);
    printf("%d\n",mySqrt(num));
    return 0;
}
