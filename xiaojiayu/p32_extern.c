#include <stdio.h>

void func1(void);
void func2(void);
void func3(void);

int main(){
    extern int count;
    func1();
    func2();
    func3();
    printf("%d\n",count);
    return 0;
}

int count;
