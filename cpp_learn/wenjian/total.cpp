#include <iostream>
#include "point.h"
using namespace std;

int main() {
    Point p;
    p.setX(5);
    p.setY(6);
    cout << p.getX() << endl << p.getY() << endl;
    return 0;
}
