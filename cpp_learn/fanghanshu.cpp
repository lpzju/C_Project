/**
 * Created by lpzju on 2023/3/14 14:18
 */
//#include <stdio.h>
#include <iostream>
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

class Fanghanshu {
public:
    void operator()(string str) {
        cout << str << endl;
    }
};

void test1() {
    Fanghanshu fc;
    fc("hello");
}

int main() {
    cout << "Let's start to solve a new problem!" << endl;
    // printf("Let's start to solve a new problem!\n");
    test1();
    Fanghanshu fc;
    fc("world");
    return 0;
}