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

int &func() {
    static int a = 5;
    return a;
}

int main() {
    cout << "Let's Start to solve a new problem!" << endl;
    int &p = func();
    p += 10;
    cout << p << endl;
    int &pp = func();
    cout << pp << endl;
    return 0;
}