//
// Created by liupeng on 2023/3/11.
//

#include <iostream>
using namespace std;

class SS{
public:
    int age;
public:
    SS(){
        cout << "�޲ι��캯������" << endl;
        cout << age << endl;
    }
    SS(int a) {
        age = a;
        cout << "�вι��캯������" << endl;
        cout << age << endl;
    }
    SS(const SS &s) {
        cout << "kaobei" << endl;
        age = s.age;
        cout << age << endl;
        age = 10;
        cout << age << endl;
    }
    ~SS() {
//        cout << "������������" << endl;
    }
};

int main() {
    SS s1;
    SS s2(5);
    SS s3(s2);
    cout << s3.age << endl;
    cout << s2.age << endl;
    return 0;
}
