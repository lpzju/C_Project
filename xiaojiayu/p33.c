#include <stdio.h>

void func(void);

int main(){
    int i;
    for (i = 0; i < 10; i++) {
        func();
    }
    extern int count;
    printf("%d\n",count);
    func();
    return 0;
}

int count;

void func(){
    static int count = 4;
    printf("%d\n",count);
    count++;
}
