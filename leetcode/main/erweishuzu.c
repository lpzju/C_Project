//
// Created by liupeng on 2023/3/10.
//

#include <stdio.h>
#include <stdlib.h>

int **func(){
    int **p = (int **) malloc (sizeof(int) * 4);
    p[0][0] = 1;
    p[0][1] = 2;
    p[1][0] = 3;
    p[1][1] = 4;
    return p;
}

int main() {
    int **temp = func();
    printf("%d %d %d %d\n",temp[0][0],temp[0][1],temp[1][0],temp[1][1]);
    free(temp);
    return 0;
}
