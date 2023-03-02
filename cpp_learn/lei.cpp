#include <iostream>

using namespace std;

class Box{
public:
    double length;
    double breadth;
    double height;
    double get(void);
    void set(double len, double bre, double hei);
};

double Box::get(void){
    return length * breadth * height;
}

void Box::set(double len, double bre, double hei) {
    length = len;
    breadth = bre;
    length = len;
}

int main(){
    Box box1;
    Box box2;
    Box box3;
    double volume = 0.0;
    box1.height = 10.0;
    box2.breadth = 6.0;
    cout << box1.height << endl;
    return 0;
}
