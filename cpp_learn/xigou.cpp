//
// Created by 45970 on 2023/3/11.
//

#include <iostream>
using namespace std;

class Student {
public:
    int s_age;
    int *s_height;
    Student() {
        cout << "wucan" << endl;
    }
    Student(int age, int height) {
        s_age = age;
        s_height = new int(height);
    }
    Student(const Student &ss) {
        s_age = ss.s_age;
//        s_height = ss.s_height;
        s_height = new int(*ss.s_height);
    }
    ~Student() {
        if (s_height != nullptr) {
            delete(s_height);
            s_height = nullptr;
        }
        cout << "xigou" << endl;
    }
};

int main () {
//    cout << "hello world" << endl;
//    Student s1;
//    cout << s1.s_age << endl;
    Student s2(10,170);
    Student s3(s2);
    cout << s2.s_age << "," << *s2.s_height << endl;
    cout << s3.s_age << "," << *s3.s_height << endl;
}

