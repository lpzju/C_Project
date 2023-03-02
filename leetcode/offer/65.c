#include <stdio.h>

int add(int a, int b){
    while (b != 0) {
        unsigned int temp = (unsigned int)(a & b) << 1;
        a ^= b;
        b = temp;
    }
    return a;
}

int main(){
    printf("请输入两个数：\n");
    int n, m;
    scanf("%d%d",&n,&m);
    int res = add(n,m);
    printf("%d\n",res);
    return 0;
}
