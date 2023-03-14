/**
 * Created by lpzju on 2023/3/12 13:27
 */

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

class ThisD{
public:
    int age;
    static int len;
    void func1() {
        cout << "func1" << endl;
    }
};

class ThisDD{
public:
    int age;
    static int len;
    ThisDD(){}
    ThisDD(int age){
        this->age = age;
    }
    void func1() {
        cout << "func1" << endl;
    }
    ThisDD &addAge(const ThisDD &d) {
        this->age += d.age;
        return *this;
    }
};

int ThisDD::len = 20;

int main() {
    ThisDD td;
    cout << sizeof(td) << endl;
    td.age = 10;
    ThisDD td2;
    td2.age = 40;
    td.addAge(td2).addAge(td2).addAge(td2);
    cout << td.age << endl;
    // 空指针调用类中的函数
    ThisDD *td3 = nullptr;
    td3->func1();
    cout << "Let's start to solve a new problem" << endl;
    return 0;
}