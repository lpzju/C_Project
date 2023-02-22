#include <stdio.h>
#include <stdlib.h>

int main(){
    int *arr = NULL;
    arr = (int *)malloc(5 * sizeof(int));
    arr[0] = 1;
    arr[1] = 2;
    printf("%d %d\n",*arr,*(arr+1));
    printf("%d\n",arr[2]);
    free(arr);
    printf("%d %d\n",*arr,*(arr+1));
    return 0;
}
