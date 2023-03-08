#include <iostream>
using namespace std;

// 引用作为参数
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    // 基础引用
    int a = 3;
    int &b = a;
    cout << a << endl << b << endl;
    cout << &a << endl << &b << endl;
    b = 6;
    cout << a << endl << b << endl;
    cout << &a << endl << &b << endl;
    // const引用
    int c = 4;
    const int &d = c;
    cout << c << endl << d << endl;
    cout << &c << endl << &d << endl;
    // d = 5;
    int e = 6;
    int f = 8;
    swap(e,f);
    cout << "e" << e << endl << "f" << f << endl;
    return 0;
}

