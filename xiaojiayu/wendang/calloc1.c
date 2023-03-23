/**
 * Created by lpzju on 2023/3/19 19:38
 */
#include <stdio.h>
#include <stdlib.h>

int main() {
    char *str = (char *) calloc (4, sizeof(char));
    printf("%s",str);
    int *arr = (int *) calloc(2, sizeof(int));
    for(int i = 0; i < 2; i++) {
        printf("%d\n",arr[i]);
    }
    printf("%d\n",arr[18]);
    return 0;
}