#include <stdio.h>
#include <stdlib.h>

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
