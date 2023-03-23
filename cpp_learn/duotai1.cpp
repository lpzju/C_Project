/**
 * Created by lpzju on 2023/3/16 12:17
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

class Fu1 {
public:
    void func1() {
        cout << "Fu " << endl;
    }
};

class Zi1 : public Fu1 {
public:
    void func1() {
        cout << "Zi" << endl;
    }
};

void funcDo(Fu1 &fu) {
    fu.func1();
}

void test () {
    Zi1 zi;
    funcDo(zi);
}

int main() {
    cout << "Let's start to solve a new problem!" << endl;
    // printf("Let's start to solve a new problem!\n");
    test();
    Fu1 fu1;
    cout << "fu1 address : " << &fu1 << endl;
    Zi1 zi1;
    fu1.func1();
    zi1.func1();
    Fu1 *fu2;
    cout << "fu2 address : " << &fu2 << endl;
    cout << "fu2 content : " << fu2 << endl;
    Zi1 zi2;
    fu2 = &zi2;
    cout << "zi2 address : " << &zi2 << endl;
    cout << "fu2 address : " << &fu2 << endl;
    cout << "fu2 content : " << fu2 << endl;
    zi2.func1();
    fu2->func1();
    return 0;
}