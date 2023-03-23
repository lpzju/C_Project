/**
 * Created by lpzju on 2023/3/22 9:31
 */
//#include <stdio.h>
#include <iostream>
#include <ctime>
#include <list>
#include <map>
#include <set>
#include <string>
#include <algorithm>
#include <cmath>
#include <queue>
#include <iterator>
#include <stack>

using namespace std;

class Worker {
public:
    virtual void showInfo() = 0;
    virtual string getDeptName() = 0;
protected:
    int m_id;
    int m_deptId;
    string m_name;
};

class Employee : public Worker {
public:
    Employee(int id, int deptId, string name);
    void showInfo(){
        cout << "Employee info" << this->m_name << "xxxxx" << m_id << endl;
    }
    string getDeptName();
};

Employee::Employee(int id, int deptId, string name) {
    this->m_name = name;
    this->m_id = id;
    this->m_deptId = deptId;
}

string Employee::getDeptName() {
    return this->m_name;
}

int main() {
    cout << "Let's start to solve a new problem!" << endl;
    // printf("Let's start to solve a new problem!\n");
    Worker *worker = nullptr;
    worker = new Employee(1,1,"lisi");
    worker->showInfo();
    return 0;
}