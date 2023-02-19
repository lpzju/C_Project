#include <stdio.h>

int main(){
    char *array[5] = {"Hello","World","nihao","shijie","zju"};
    char *(*pp)[5] = &array;
    int i,j;
    for(i = 0; i < 5; i++){
        for(j = 0; *(*(*pp+i)+j) != '\0'; j++){
            printf("%c ",*(*(*pp+i)+j));
        }
        printf("\n");
    }
    return 0;
}
