#include <iostream>
using namespace std;

// 设计一个圆的类，求圆的周长
class Circle {
public:
    const double PI = 3.14;
    int m_r;
public:
    void getZC() {
        cout << 2 * m_r * PI << endl;
    }
};

int main() {
    Circle c1;
    c1.m_r = 5;
    c1.getZC();
    return 0;
}
