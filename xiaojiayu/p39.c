#include <stdio.h>
#include <stdlib.h>

// 注意不能直接认为栈是从高到低排列
// 经测试，win11和centos8的栈是从高到低，ubuntu20的栈是从低到高
// 其他系统未测试，那么其实应该是系统进行了调整

int main(){
    // 堆和栈的不同内存
    int *ptr1 = (int *) malloc (4 * sizeof (int));
    int *ptr2 = (int *) malloc (4 * sizeof (int));
    printf("栈中地址，ptr1：%p，ptr2：%p\n",&ptr1,&ptr2);
    printf("堆中地址，ptr1：%p，ptr2：%p\n",ptr1,ptr2);

    int *ptr3 = NULL;
    int *ptr4 = NULL;
    printf("栈中地址，ptr3：%p，ptr4：%p\n",&ptr3,&ptr4);
}
