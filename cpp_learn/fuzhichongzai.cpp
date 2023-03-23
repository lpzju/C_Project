/**
 * Created by lpzju on 2023/3/14 12:43
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

class FuzhiChongzai{
public:
    int *m_age;
    FuzhiChongzai(int age) {
        m_age = new int(age);
    }
    ~FuzhiChongzai() {
        if (m_age != nullptr) {
            delete m_age;
            m_age = nullptr;
        }
    }
    FuzhiChongzai(const FuzhiChongzai &fz) {
        this->m_age = new int(*fz.m_age);
    }
    // 重载赋值运算符
    FuzhiChongzai &operator=(FuzhiChongzai &fz) {
        if (m_age != nullptr) {
            delete m_age;
            m_age = nullptr;
        }
        this->m_age = new int(*fz.m_age);
        return *this;
    }
};

void test1() {
    FuzhiChongzai fc1(20);
    FuzhiChongzai fc2(30);
    fc2 = fc1;
    cout << "fc1 age : " << *fc1.m_age << endl;
    cout << "fc2 age : " << *fc2.m_age << endl;
}

void test2() {
    FuzhiChongzai fc1(40);
    FuzhiChongzai fc2(fc1);
    cout << "fc1 age : " << *fc1.m_age << endl;
    cout << "fc2 age : " << *fc2.m_age << endl;
}

int main() {
    cout << "Let's start to solve a new problem!" << endl;
    // printf("Let's start to solve a new problem!\n");
//    int *p1 = new int(3);
//    int *p2 = new int[3];
//    cout << *p1 << endl;
//    p2[1] = 2;
//    cout << p2[1] << endl;
//    cout << p1 << p2 << endl;
    test1();
    test2();
    return 0;
}