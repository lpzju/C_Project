/**
 * Created by lpzju on 2023/3/18 15:54
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

class Xu {
public:
    virtual void func() = 0;
};

class Zi : public Xu {
public:
    void func() {
        cout << "zi" << endl;
    }
};

void showFunc(Xu &xu) {
    xu.func();
}

void test() {
    Xu *xu = new Zi;
    xu->func();
}

int main() {
    cout << "Let's start to solve a new problem!" << endl;
    // printf("Let's start to solve a new problem!\n");
    test();
    return 0;
}