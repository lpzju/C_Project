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

class Jingt{
public:
    int age = 1;
//    static int len = 3; // Non-const static data member must be initialized out of line
    static int len;
};

int Jingt::len = 3;
//int Jingt::age = 5; // 非静态的成员变量不能这样赋值

int main() {
    cout << "Let's Start to solve a new problem!" << endl;
    Jingt j1;
    cout << j1.age << endl << j1.len << endl << Jingt::len <<endl;
    return 0;
}