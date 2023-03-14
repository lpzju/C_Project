//
// Created by 45970 on 2023/3/11.
//

#include <iostream>
using namespace std;

class Stu {
public:
    int s_a,s_b,s_c;
//    Stu(int a,int b,int c) {
//        s_a = a;
//        s_b = b;
//        s_c = c;
//    }
    Stu(int a,int b,int c):s_a(a),s_b(b),s_c(c) {}
};

int main () {
    Stu s1(10,20,30);
    cout << s1.s_a;
}