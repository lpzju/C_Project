#include <stdio.h>

void re(int n);

int main(){
    re(5);
    return 0;
}

void re(int n){
    if(n == 1){
        printf("hhh\n");
    }else{
        re(n-1);
    }
}
