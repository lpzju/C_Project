#include <stdio.h>
#define SSS(x,y) x##y

int main(){
    // printf("%d\n",SSS(2,50));
    printf("%s\n",SSS("hello","world"));
    return 0;
}
