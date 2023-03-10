#include <iostream>
using namespace std;

// 设计一个学生类，属性有姓名和学号，可以给姓名和学号赋值，可以显示学生的姓名和学号
class Student {
public:
    string s_name;
    string s_uid;
public:
    void setName(string name) {
        s_name = name;
    }
    void setUid(string uid) {
        s_uid = uid;
    }
    void show(void) {
        cout << "姓名：" << s_name << "学号：" << s_uid << endl;
    }
};

int main() {
    Student s1;
    s1.s_name = "zhangsan";
    s1.s_uid = "111111";
    s1.show();
    string name;
    cin >> name;
    s1.setName(name);
    s1.show();
    s1.setName("wangwu");
    s1.show();
    return 0;
}
