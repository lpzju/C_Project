#include <iostream>
using namespace std;

const double PI = 3.14;

class Circle{
public:
    int m_r;
    double getZC(){
        return 2 * PI * m_r;
    }
};

int main() {
    Circle c1;
    c1.m_r = 5;
    cout << c1.m_r << endl << c1.getZC() << endl;
    return 0;
}

