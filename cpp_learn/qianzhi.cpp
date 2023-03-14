/**
 * Created by lpzju on 2023/3/12 21:18
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

class MyInteger {
    friend ostream &operator<<(ostream &cout, MyInteger mi);
private:
    int m_num;
public:
    MyInteger(int num) {
        m_num = num;
    }
    MyInteger &operator++(){
        m_num++;
        return *this;
    }
//    MyInteger operator++(int) {
//        MyInteger temp = *this;
//        m_num++;
//        return temp;
//    }
    int operator++(int) {
        int temp = m_num;
        m_num++;
        return temp;
    }
};

ostream &operator<<(ostream &cout, MyInteger mi){
    cout << "num: " << mi.m_num;
    return cout;
}

void test1(){
    MyInteger mi(10);
    cout << mi << endl;
    cout << ++mi << endl;
    cout << mi << endl;
    cout << mi++ << endl;
    cout << mi << endl;
}

int main() {
    cout << "Let's start to solve a new problem" << endl;
    test1();
    return 0;
}