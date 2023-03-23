/**
 * Created by lpzju on 2023/3/19 13:55
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

class Fu2 {
public:
    Fu2() {
        cout << "Fu wucan gouzao" << endl;
    }
    ~Fu2() {
        cout << "Fu xigou" << endl;
    }
};

class Zi2 : public Fu2 {
public:
    Zi2() {
        cout << "Zi wucan gouzao" << endl;
    }
    ~Zi2() {
        cout << "Zi xigou" << endl;
    }
};

void test() {
    Zi2 zi4;
}

int main() {
    cout << "Let's start to solve a new problem!" << endl;
    // printf("Let's start to solve a new problem!\n");
    test();
    return 0;
}