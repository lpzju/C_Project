#include <iostream>
using namespace std;

void show(int a) {
    cout << a << endl;
}

void show2(double c) {
    cout << c << endl;
}

int main() {
    int b = 4;
    double c = 5.5;
    show(b);
    show(c);
    show(1.1);
    show2(2.2);
    int d = 9;
    show2(d);
    return 0;
}
