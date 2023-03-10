#include <iostream>
using namespace std;
#include <cmath>
// 判断点和圆的关系

class Dot {
public:
    int d_x;
    int d_y;
public:
    void set(int x, int y) {
        d_x = x;
        d_y = y;
    }
};

class Circle {
public:
    Dot c_center;
    int c_r;
public:
    void isIn(Dot d) {
        if (pow(d.d_x - c_center.d_x,2) + pow(d.d_y - c_center.d_y,2) == pow(c_r,2 )) {
            cout << "在圆上" << endl;
        } else {
            cout << "不在圆上" << endl;
        }
    }
};


int main() {
    Dot d = {3,0};
    Dot e = {0,0};
    Circle c;
    c.c_center = e;
    c.c_r = 3;
    c.isIn(d);
    return 0;
}
