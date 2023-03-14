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
        cout << "无参构造函数调用" << endl;
        cout << age << endl;
    }
    SS(int a) {
        age = a;
        cout << "有参构造函数调用" << endl;
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
//        cout << "析构函数调用" << endl;
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
