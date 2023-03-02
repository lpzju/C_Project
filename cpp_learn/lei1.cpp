#include <iostream>
using namespace std;

// 定义一个Box类，里面有长宽高和一个set方法，以及get方法返回体积
class Box {
public:
    double length;
    double width;
    double height;
    double get (double len, double wid, double hei);
    void set (double len, double wid, double hei) {
        length = len;
        width = wid;
        height = hei;
    }
};

double Box::get(double len, double wid, double hei) {
    return len * wid * hei;
}

int main() {
    Box box1;
    box1.set(2.5,3,4);
    cout << box1.get(4,5,6) << endl;
    return 0;
}
