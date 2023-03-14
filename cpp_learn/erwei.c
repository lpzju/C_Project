#include <stdio.h>

void func1(int **a) {
    printf("%d\n",**a);
}

int main() {
    int arr[][2] = {1,2,3,4}; 
    printf("%p\n",arr);
    printf("%p\n",*arr);
    printf("%p\n",*(arr+1));
    printf("%p\n",arr+1);
    func1(arr);
    return 0;
}