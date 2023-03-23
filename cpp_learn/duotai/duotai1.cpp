/**
 * Created by lpzju on 2023/3/18 16:03
 */
//#include <stdio.h>
#include <iostream>
#include <ctime>
#include <list>
#include <map>
#include <set>
#include <string>
#include <algorithm>
#include <cmath>
#include <queue>
#include <iterator>
#include <stack>

using namespace std;

int main() {
    cout << "Let's start to solve a new problem!" << endl;
    // printf("Let's start to solve a new problem!\n");
    // 父类指针或引用指向子类对象
    // 注意直接创建父类为子类对象是不行的，这会使得强制转换
    int i = 2;
    cout << "i : " << i << endl;
    cout << "&i : " << &i << endl;
    double d = 3.14;
    cout << "d : " << d << endl;
    cout << "&d : " << &d << endl;
    i = d;
    cout << "i : " << i << endl;
    cout << "&i : " << &i << endl;
    int *p = &i;
    cout << "p : " << p << endl;
    cout << "*p : " << *p << endl;
    const char *str = "hello";
    cout << str << endl;
    str = (char *) malloc (10);

    return 0;
}