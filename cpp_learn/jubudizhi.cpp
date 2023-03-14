#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <list>
#include <queue>
#include <map>
#include <iterator>
#include <stack>

using namespace std;

int func() {
    int a = 3;
    cout << "address a:" << &a << endl;
    return a;
}

int main() {
    cout << "Let's Start to solve a new problem!" << endl;
    int p = func();
    cout << "address p" << &p << endl;
    cout << "address p" << &p << endl;
    cout << "address p" << &p << endl;
    cout << "address p" << &p << endl;
    return 0;
}