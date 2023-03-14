//
// Created by 45970 on 2023/3/11.
//

#include <iostream>
using namespace std;

void func(void* i)
{
    cout << "func1" << endl;
}

void func1(int i)
{
    cout << "func2" << endl;
}

int main(int argc,char* argv[])
{
    func1(NULL);
    func(nullptr);
    int *p = NULL;
    *p = 5;
    cout << *p << endl;
//    getchar();
}