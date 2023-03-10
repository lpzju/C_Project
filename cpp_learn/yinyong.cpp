#include <iostream>
using namespace std;

// 引用作为参数
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// 引用作为返回值，但是不能将局部变量直接返回
int &func1(void) {
    static int a = 20;
    return a;
}
int &func2(void) {
    int a = 20;
    return a;
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
    int &cc = b;
    cc = 9;
    cout << a << endl << b << endl;
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
    cout << "引用作为返回值" << endl;
    int &aa = func1();
    cout << aa << endl;
    cout << aa << endl;
    int &bb = func2();
    func2() = 1000;
    int &ccc = bb;
    cout << ccc << endl;
    //cout << bb << endl; // 段错误
    return 0;
}

