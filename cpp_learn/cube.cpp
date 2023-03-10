#include <iostream>
using namespace std;

// 立方体
class Cube {
public:
    int c_len;
    int c_wid;
    int c_hei;
public:
    void isEqual(Cube c) {
        if (c.c_len == c_len && c.c_wid == c_wid && c.c_hei == c_hei) {
            cout << "相等" << endl;
        } else {
            cout << "不相等" << endl;
        }
    }
};

int main() {
    Cube c1, c2;
    c1.c_len = 10;
    c1.c_wid = 4;
    c1.c_hei = 2;
    c2.c_len = 10;
    c2.c_wid = 5;
    c2.c_hei = 2;
    c1.isEqual(c2);
    return 0;
}
