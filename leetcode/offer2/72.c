#include <stdio.h>

int mySqrt(int x);

int main() {
    int x;
    printf("请输入一个非负整数:\n");
    scanf("%d",&x);
    int res = mySqrt(x);
    printf("%d\n",res);
}

int mySqrt(int x){
    int temp;
    int i;
    if (x < 0) {
        return -1;
    } else {
        if (x == 0) {
            return 0;
        } else if (x == 1) {
            return 1;
        } else {
            for (i = 0; i <= x/2; i++) {
                temp = i + 1;
                if ((i*i <= x) && (temp*temp > x)) {
                    return i;
                }
            }
        }
    }
}
