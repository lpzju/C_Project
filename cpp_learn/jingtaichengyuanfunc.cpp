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

class JingtaiFunc{
public:
    static int age;
    int len;
    static void func1() {
        cout << age << endl;
//        cout << len << endl;
    }
};

int JingtaiFunc::age = 20;

int main() {
    cout << "Let's Start to solve a new problem!" << endl;
    JingtaiFunc jf1;
    jf1.len = 4;
    jf1.age = 10;
    jf1.func1();
    return 0;
}