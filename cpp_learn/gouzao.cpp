//
// Created by liupeng on 2023/3/10.
//

#include <iostream>
using namespace std;

class Student{

public:
    Student(){
        cout << "无参构造" << endl;
    }
    ~Student(){
        cout << "无参析构" << endl;
    }
};

int main () {
    Student s1;
    return 0;
}