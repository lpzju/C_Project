//
// Created by liupeng on 2023/3/10.
//

#include <iostream>
using namespace std;

class Student{

public:
    Student(){
        cout << "�޲ι���" << endl;
    }
    ~Student(){
        cout << "�޲�����" << endl;
    }
};

int main () {
    Student s1;
    return 0;
}