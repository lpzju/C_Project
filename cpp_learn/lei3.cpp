#include <iostream>
using namespace std;

class Box {
public:
    double length;
    double height;
    double width;
    double get(void) {
        return length*height*width;
    }
    void set(double len, double wid, double hei) {
        length = len;
        width = wid;
        height = hei;
    }
};

int main() {
    Box box1;
    Box box2;
    box1.height = 10;
    box1.width = 2;
    box1.length = 3;
    cout << box1.width << box1.get() << endl;
    return 0;
}
