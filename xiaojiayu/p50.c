#include <stdio.h>
#include <stdlib.h>

int func1(void){
    return 111;
}
// 指针函数，为了配合装杯用的
char *func2(char ch){
    return "Hello";
}

// typedef的使用
// 1.简单指针
typedef int *Pointer;
// 2.数组指针
typedef int (* Array)[3];
// 3.指针数组
typedef char *Arr[3];
// 4.函数指针
typedef int (*Func) (void);
// 装杯用法1
// 首先不用typedef，看一下这个装杯的东西
// main函数实际写的时候，是比较复杂的 char *(* func4[3]) (char ch)
// 现在对其进行改进，写成typedef的形式
typedef char *(* FUNC4) (char ch);

int main(){
    printf("----简单的指针----\n");
    int a = 4;
    printf("%d\n",a);
    Pointer p1 = &a;
    printf("%d\n",*p1);
    printf("----数组指针----\n");
    int arr[3] = {1,2,3};
    printf("%d\n",arr[1]);
    Array a1 = &arr;
    printf("%d\n",*(*a1)+1);
    printf("----指针数组----\n");
    Arr str1 = {
        "Hello",
        "World",
        "C"
    };
    printf("%s\n",str1[1]);
    printf("----函数指针----\n");
    Func f1 = &func1;
    printf("%d\n",(*f1)());
    printf("----装杯用法----\n");
    printf("%s\n",func2('a'));
    int (* func3) (void);
    func3 = &func1;
    printf("%d\n",(*func3)());
    printf("----装杯用法开始----\n");
    char *(* func4[3]) (char ch);
    func4[0] = &func2;
    func4[1] = &func2;
    func4[2] = &func2;
    printf("%s\n",(*(func4[0]))('v')); 
    printf("----使用typedef的装杯用法----\n");
    FUNC4 func5[3];
    func5[0] = &func2;
    func5[1] = &func2;
    func5[2] = &func2;
    printf("%s\n",(*(func5[0]))('g'));
    return 0;
}
